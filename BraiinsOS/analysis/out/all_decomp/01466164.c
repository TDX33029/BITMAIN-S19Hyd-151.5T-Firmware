// FUN_01466164 @ 01466164 size=132 calls_out=2 calls_in=1
// strings: invalid TLS verification settings

undefined4 FUN_01466164(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined2 local_24 [10];
  
  local_24[0] = 0;
  uVar2 = FUN_014c9748(local_24,"invalid TLS verification settings",0x21);
  if ((*param_1 != 0xc) && (*param_1 == 5)) {
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[1],param_1[2]);
    }
  }
  return uVar2;
}

