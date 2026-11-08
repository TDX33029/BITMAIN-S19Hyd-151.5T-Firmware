// FUN_019d75f8 @ 019d75f8 size=116 calls_out=3 calls_in=4
// strings: 

void FUN_019d75f8(uint *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  if (uVar2 == 4) {
    if (param_1[4] == 0) {
      return;
    }
    FUN_01443048(param_1[4],param_1[5]);
    return;
  }
  uVar3 = uVar2 - 2;
  if (uVar2 < 2) {
    uVar3 = 2;
  }
  if (uVar3 < 2) {
    cVar1 = (char)param_1[1];
    if (cVar1 == '\x04') goto LAB_019d7660;
  }
  else {
    if (uVar2 == 0) goto LAB_019d7660;
    cVar1 = (char)param_1[1];
  }
  FUN_0069d8a4(cVar1,param_1[2]);
LAB_019d7660:
  FUN_019bb7e0(param_1[4],param_1[5]);
  return;
}

