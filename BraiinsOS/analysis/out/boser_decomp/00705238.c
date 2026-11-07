// FUN_00705238 @ 00705238 size=64 calls_out=2 calls_in=4
// strings: WrongAlgorithm

undefined8 FUN_00705238(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_01b3d638();
  if (iVar1 == 0) {
    return 0xf0051d665;
  }
  iVar1 = FUN_01b3d280();
  pcVar2 = (char *)0x0;
  if (iVar1 != param_2) {
    pcVar2 = "WrongAlgorithm";
  }
  return CONCAT44(0xe,pcVar2);
}

