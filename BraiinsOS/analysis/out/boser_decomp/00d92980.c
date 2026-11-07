// FUN_00d92980 @ 00d92980 size=80 calls_out=2 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00d92980(char param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  pcVar1 = "true\x1e\x05";
  if (param_1 != '\0') {
    pcVar1 = "f";
  }
  uVar2 = 5;
  if (param_1 == '\0') {
    uVar2 = 4;
  }
  FUN_00a5208c(&local_10,param_2,pcVar1,uVar2);
  if ((char)local_10 == '\x04') {
    return 0;
  }
  uVar2 = FUN_01966f50(local_10,uStack_c);
  return uVar2;
}

