// FUN_018e43e8 @ 018e43e8 size=372 calls_out=4 calls_in=2
// strings: ECPointFormat

void FUN_018e43e8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte unaff_r4;
  byte unaff_r5;
  int iVar4;
  undefined8 uVar5;
  undefined8 uStack_3c;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  FUN_01930f74(&local_30,&DAT_01d232f0,param_2);
  if ((char)local_30 == '\x18') {
    uVar5 = FUN_0192fac8(param_2,local_2c);
    if ((int)uVar5 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 0xb;
      return;
    }
    iVar4 = 1;
    local_34 = 0;
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
    if ((int)((ulonglong)uVar5 >> 0x20) != 0) {
      do {
        iVar1 = local_28;
        uStack_3c = uVar5;
        uVar5 = FUN_0192fac8(&uStack_3c,1);
        if (((byte *)uVar5 == (byte *)0x0) || ((int)((ulonglong)uVar5 >> 0x20) != 1)) {
          *(undefined1 *)(param_1 + 1) = 0xc;
          param_1[2] = "ECPointFormat";
          param_1[3] = 0xd;
          *param_1 = 1;
          *(byte *)((int)param_1 + 6) = unaff_r4;
          *(byte *)((int)param_1 + 5) = unaff_r5;
          FUN_0134aee0(local_30,iVar4,1,2);
          return;
        }
        unaff_r4 = *(byte *)uVar5;
        unaff_r5 = unaff_r4;
        if (2 < unaff_r4) {
          unaff_r5 = 3;
        }
        uVar5 = uStack_3c;
        if (iVar1 == local_30) {
          FUN_016f5378(&local_30);
          iVar4 = local_2c;
          uVar5 = uStack_3c;
        }
        uStack_3c._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
        pbVar2 = (byte *)(iVar4 + iVar1 * 2);
        *pbVar2 = unaff_r5;
        local_28 = iVar1 + 1;
        pbVar2[1] = unaff_r4;
      } while (local_34 < uStack_3c._4_4_);
    }
    param_1[1] = local_30;
    param_1[2] = local_2c;
    param_1[3] = local_28;
    uVar3 = 0;
  }
  else {
    *(char *)(param_1 + 1) = (char)local_30;
    uVar3 = 1;
    *(undefined1 *)((int)param_1 + 7) = local_30._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_30._1_2_;
    param_1[2] = local_2c;
    param_1[3] = local_28;
  }
  *param_1 = uVar3;
  return;
}

