import importlib.util
import sys

def check_and_install():
    # The 'Big 4' audit
    packages = ["tkinter", "sqlite3", "json", "os"]
    missing_packages = []

    for pkg in packages:
        if importlib.util.find_spec(pkg) is None:
            missing_packages.append(pkg)
    
    if not missing_packages:
        print("✅ All core packages are present.")
    else:
        print(f"❌ Missing: {', '.join(missing_packages)}")
        # Open in 'w' mode to overwrite/create the file
        with open("missing-pkg", "w") as theunpkg:
            # Join the list into a string and add the state label
            log_entry = f"MISSING: {', '.join(missing_packages)} | STATE: UNUSEABLE"
            theunpkg.write(log_entry)
        
if __name__ == "__main__":
    check_and_install()
