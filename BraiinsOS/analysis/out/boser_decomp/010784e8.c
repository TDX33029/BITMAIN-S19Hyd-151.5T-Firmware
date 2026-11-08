// FUN_010784e8 @ 010784e8 size=244 calls_out=5 calls_in=0
// strings: 

void FUN_010784e8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_1c [12];
  
  FUN_00f1ebb8(&local_88,*param_2,*param_3);
  uVar1 = local_80;
  uVar2 = local_84;
  if (local_88 == 4) {
    *param_1 = 5;
    param_1[1] = 0;
    return;
  }
  if (local_88 == 3) {
    local_84 = 0;
    local_88 = 4;
  }
  else {
    if (local_88 == 0) {
      uVar2 = 0;
      local_74 = 0;
      local_78 = local_84;
    }
    else {
      if (local_88 != 1) {
        FUN_006666fc(auStack_1c,local_80);
        FUN_01a70fd4(&local_88,0xd,auStack_1c);
        FUN_019bb7e0(uVar2,uVar1);
        goto LAB_010785c4;
      }
      local_74 = local_7c;
      uVar2 = 1;
      local_78 = local_80;
      local_7c = local_84;
    }
    local_84 = 0;
    local_88 = 3;
    local_80 = uVar2;
  }
LAB_010785c4:
  FUN_01bed4e2(param_1,&local_88,0x68);
  return;
}

