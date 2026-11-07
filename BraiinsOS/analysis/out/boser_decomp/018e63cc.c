// FUN_018e63cc @ 018e63cc size=356 calls_out=6 calls_in=1
// strings: 

void FUN_018e63cc(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uStack_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_01930f74(&local_30,&DAT_01d23340,param_2);
  if (local_30 == '\x18') {
    uVar7 = FUN_0192fac8(param_2,local_2c);
    if ((int)uVar7 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 0xb;
      return;
    }
    iVar6 = 1;
    local_44 = 0;
    local_38 = 0;
    local_3c = 1;
    local_40 = 0;
    if ((int)((ulonglong)uVar7 >> 0x20) != 0) {
      do {
        iVar1 = local_38;
        uStack_4c = uVar7;
        FUN_0190cdf8(&local_30,&uStack_4c);
        uVar2 = (undefined1)local_2f;
        uVar3 = local_2f._1_1_;
        if (local_30 != '\x18') {
          FUN_01bed4e2((int)param_1 + 7,(uint)&local_30 | 3,9);
          *param_1 = 1;
          *(undefined1 *)((int)param_1 + 6) = local_2f._1_1_;
          *(undefined1 *)((int)param_1 + 5) = (undefined1)local_2f;
          *(char *)(param_1 + 1) = local_30;
          FUN_0134aee0(local_40,iVar6,1,2);
          return;
        }
        uVar7 = uStack_4c;
        if (iVar1 == local_40) {
          FUN_016f5378(&local_40);
          iVar6 = local_3c;
          uVar7 = uStack_4c;
        }
        uStack_4c._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
        puVar4 = (undefined1 *)(iVar6 + iVar1 * 2);
        *puVar4 = uVar2;
        local_38 = iVar1 + 1;
        puVar4[1] = uVar3;
      } while (local_44 < uStack_4c._4_4_);
    }
    param_1[1] = local_40;
    param_1[2] = local_3c;
    param_1[3] = local_38;
    uVar5 = 0;
  }
  else {
    *(char *)(param_1 + 1) = local_30;
    uVar5 = 1;
    *(undefined1 *)((int)param_1 + 7) = local_2d;
    *(undefined2 *)((int)param_1 + 5) = local_2f;
    param_1[2] = local_2c;
    param_1[3] = local_28;
  }
  *param_1 = uVar5;
  return;
}

