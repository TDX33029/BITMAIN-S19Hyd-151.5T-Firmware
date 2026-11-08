// FUN_0002a800 @ 0002a800  size=96  callers=2
// program: cgminer


undefined4 FUN_0002a800(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  double dVar2;
  undefined1 auStack_10 [8];
  
  if (*(int *)(param_1 + 0x170) == 0) {
    dVar2 = DAT_000681d0;
    if (DAT_000681d0 < 1.0) {
      dVar2 = 0.0;
    }
    return SUB84(dVar2,0);
  }
  FUN_000206d8(auStack_10);
  uVar1 = FUN_00020a04(auStack_10,param_1 + 0x170);
  dVar2 = (double)CONCAT44(extraout_s1,uVar1);
  if (dVar2 < 1.0) {
    dVar2 = 0.0;
  }
  return SUB84(dVar2,0);
}

