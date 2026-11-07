// FUN_019ee0b4 @ 019ee0b4 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_019ee0b4(uint *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  if (uVar2 == 4) {
    FUN_00b91e68(param_1[4],param_1[5]);
    return;
  }
  if (uVar2 == 5) {
    return;
  }
  uVar3 = uVar2 - 2;
  if (uVar2 < 2) {
    uVar3 = 2;
  }
  if (uVar3 < 2) {
    cVar1 = (char)param_1[1];
    if (cVar1 == '\x04') goto LAB_019ee114;
  }
  else {
    if (uVar2 == 0) goto LAB_019ee114;
    cVar1 = (char)param_1[1];
  }
  FUN_0069263c(cVar1,param_1[2]);
LAB_019ee114:
  FUN_019bb7e0(param_1[4],param_1[5]);
  return;
}

