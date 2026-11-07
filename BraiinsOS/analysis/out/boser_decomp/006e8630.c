// FUN_006e8630 @ 006e8630 size=264 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_006e8630(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
    uVar2 = 1;
  }
  else {
    if (*param_1 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    cVar1 = *(char *)((int)param_1 + 0x91);
    if (cVar1 != '\0') {
      *(undefined1 *)((int)param_1 + 0x91) = 0;
    }
    uVar4 = FUN_006f5094(param_1,&DAT_005319c3,1);
    uVar3 = (uint)(uVar4 >> 0x20);
    if ((uVar4 & 1) == 0) {
      uVar4 = (ulonglong)uVar3 << 0x20;
    }
    else {
      uVar4 = FUN_006f5094(uVar3,",",1);
    }
    uVar3 = (uint)(uVar4 >> 0x20);
    if ((uVar4 & 1) == 0) {
      uVar4 = (ulonglong)uVar3 << 0x20;
    }
    else {
      uVar4 = FUN_006f5094(uVar3,&DAT_00522133,1);
    }
    uVar3 = (uint)(uVar4 >> 0x20);
    if ((uVar4 & 1) == 0) {
      uVar4 = (ulonglong)uVar3 << 0x20;
    }
    else {
      uVar4 = FUN_006f5094(uVar3,&DAT_0052cf46,3);
    }
    uVar3 = (uint)(uVar4 >> 0x20);
    if ((uVar4 & 1) == 0) {
      lVar5 = (ulonglong)uVar3 << 0x20;
    }
    else {
      lVar5 = FUN_006e8748(uVar3);
    }
    param_1 = (int *)((ulonglong)lVar5 >> 0x20);
    uVar2 = (undefined4)lVar5;
    if (cVar1 != '\0') {
      *(char *)((int)param_1 + 0x91) = cVar1;
    }
  }
  return CONCAT44(param_1,uVar2);
}

