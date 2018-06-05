with import <nixpkgs> {}; stdenv.mkDerivation {
  name = "seeing";
  src = ./.;

  buildInputs = [
    pkgs.godot
  ];

  meta = {
    homepage = "https://github.com/monokrome/seeing";
    description = "Seeing is believing.";
  };
}
