// let userForm = document.getElementById("user-form");

// let userEntries = [];

// const saveUserForm = (event) => {
//     event.preventDefault();
//     const name = document.getElementById("name").value;
//     const email = document.getElementById("email").value;
//     const password = document.getElementById("password").value;
//     const dob = document.getElementById("dob").value;
//     const acceptedTermsAndconditions = document.getElementById("acceptTerms").checked;

//     const entry = {
//         name,
//         email,
//         password,
//         dob,
//         acceptedTermsAndconditions
//     };
//     userEntries.push(entry);

//     localStorage.setItem("user-entries", JSON.stringify(userEntries));
// }
// userForm.addEventListener("submit", saveUserForm);

let userForm = document.getElementById("user-form");
let userTable = document.getElementById("user-table");
let userEntries = [];

const saveUserForm = (event) => {
    event.preventDefault();
    const name = document.getElementById("name").value;
    const email = document.getElementById("email").value;
    const password = document.getElementById("password").value;
    const dob = document.getElementById("dob").value;
    const acceptedTermsAndconditions = document.getElementById("acceptTerms").checked;

    const entry = {
        name,
        email,
        password,
        dob,
        acceptedTermsAndconditions
    };
    userEntries.push(entry);

    localStorage.setItem("user-entries", JSON.stringify(userEntries));

    renderUserTable();
}

const renderUserTable = () => {
    userTable.innerHTML = `
        <tr>
            <th>Name</th>
            <th>Email</th>
            <th>Password</th>
            <th>Date of Birth</th>
            <th>Accepted Terms and Conditions</th>
        </tr>
    `;
    for (let i = 0; i < userEntries.length; i++) {
        const entry = userEntries[i];
        userTable.innerHTML += `
            <tr>
                <td>${entry.name}</td>
                <td>${entry.email}</td>
                <td>${entry.password}</td>
                <td>${entry.dob}</td>
                <td>${entry.acceptedTermsAndconditions ? "Yes" : "No"}</td>
            </tr>
        `;
    }
}

userForm.addEventListener("submit", saveUserForm);
