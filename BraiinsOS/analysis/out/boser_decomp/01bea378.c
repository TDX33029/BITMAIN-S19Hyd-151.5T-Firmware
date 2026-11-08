// FUN_01bea378 @ 01bea378 size=352 calls_out=11 calls_in=1
// strings: 

int FUN_01bea378(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_1634;
  undefined4 local_1630;
  int local_162c [6];
  undefined4 local_1614;
  undefined4 local_1610;
  undefined1 auStack_160c [128];
  undefined4 local_158c;
  undefined4 uStack_1588;
  undefined1 *local_1584;
  undefined4 local_1580;
  undefined4 local_157c;
  undefined1 auStack_1578 [5456];
  undefined1 auStack_28 [4];
  
  local_1634 = 0;
  FUN_01bef8fc(1,&local_1630);
  local_158c = param_2;
  uStack_1588 = param_3;
  if (param_4 == (undefined1 *)0x0) {
    param_4 = auStack_1578;
    FUN_01bed93e(param_4,0,0x150);
  }
  local_1580 = param_5;
  local_157c = param_6;
  local_162c[1] = 0xffffffff;
  local_162c[2] = 0xffffffff;
  local_162c[3] = 0xffffffff;
  local_162c[4] = 0xffffffff;
  local_1584 = param_4;
  FUN_01bef9e4(0,local_162c + 1,auStack_160c);
  FUN_01bedf2c(&DAT_01d53564);
  iVar1 = FUN_01bf0398(&local_1614,0x80000);
  if (iVar1 == 0) {
    iVar2 = FUN_01bee364(0x1bea0b9,auStack_28,0x4111,&local_1614);
    FUN_01bf01d6(local_1610);
    FUN_01bee02c(&DAT_01d53564);
    if (iVar2 < 1) {
      local_1634 = -iVar2;
    }
    else {
      iVar4 = FUN_01bf0424(local_1614,&local_1634,4);
      if (iVar4 == 4) {
        local_162c[0] = iVar1;
        FUN_01bea62a(iVar2,local_162c,0);
      }
      else {
        local_1634 = 0;
      }
    }
    FUN_01bf01d6(local_1614);
    if (param_1 != (int *)0x0 && local_1634 == 0) {
      *param_1 = iVar2;
    }
  }
  else {
    FUN_01bee02c(&DAT_01d53564);
    piVar3 = (int *)FUN_01be3244();
    local_1634 = *piVar3;
  }
  FUN_01bef9e4(2,auStack_160c,0);
  FUN_01bef8fc(local_1630,0);
  return local_1634;
}

