function rot13(message) {
  const upper = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
  const lower = 'abcdefghijklmnopqrstuvwxyz';

  return message.split('').reduce((str, char) => {
    const chars = (char === char.toUpperCase()) ? upper : lower;

    return (chars.indexOf(char) === -1) ?
      str + char :
      str + chars[(chars.indexOf(char) + 13) % chars.length];
  }, '');
}
