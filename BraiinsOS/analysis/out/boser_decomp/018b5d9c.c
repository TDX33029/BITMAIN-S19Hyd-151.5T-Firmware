// FUN_018b5d9c @ 018b5d9c size=336 calls_out=3 calls_in=2
// strings: ECCurveTypeDefaultTimeProvider

void FUN_018b5d9c(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined1 extraout_r3;
  undefined1 uVar6;
  undefined1 unaff_r6;
  undefined1 unaff_r8;
  uint extraout_r12;
  uint uVar7;
  ushort uVar8;
  undefined8 uVar9;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar8 = 0x5db8;
  uVar9 = FUN_018beed0(param_2,1);
  uVar7 = extraout_r12;
  if (((byte *)uVar9 == (byte *)0x0) || ((int)((ulonglong)uVar9 >> 0x20) != 1)) {
    uVar4 = 0xb;
    cVar3 = '\v';
    uVar5 = 0x33f5;
    unaff_r6 = 0;
    uVar6 = 0x52;
  }
  else {
    bVar2 = *(byte *)uVar9;
    cVar3 = '\x12';
    uVar4 = 0xb;
    uVar5 = 0x33f5;
    uVar6 = extraout_r3;
    if (bVar2 < 4) {
      uVar1 = 8 >> (bVar2 & 0xf);
      unaff_r6 = 8;
      uVar6 = (char)uVar1;
      if ((uVar1 & 1) != 0) {
        FUN_018be238(&local_30,param_2);
        uVar8 = local_30._2_2_;
        uVar5 = (undefined2)local_2c;
        if ((char)local_30 == '\x14') {
          FUN_018c41e4(&local_30,param_2);
          if (local_30 == 0) {
            *param_1 = local_2c;
            param_1[1] = local_28;
            param_1[2] = uStack_24;
            *(byte *)((int)param_1 + 0x11) = bVar2;
            *(undefined1 *)(param_1 + 4) = 2;
            *(undefined2 *)((int)param_1 + 0xe) = uVar5;
            *(ushort *)(param_1 + 3) = uVar8;
            return;
          }
          param_1[1] = local_2c;
          param_1[2] = local_28;
          param_1[3] = uStack_24;
          goto LAB_018b5e94;
        }
        uVar7 = (uint)(local_30._2_2_ >> 8);
        uVar4 = local_28;
        cVar3 = (char)local_30;
        unaff_r6 = local_2c._3_1_;
        uVar6 = local_2c._2_1_;
        unaff_r8 = local_30._1_1_;
      }
    }
  }
  *(undefined2 *)(param_1 + 2) = uVar5;
  *(undefined1 *)((int)param_1 + 0xb) = unaff_r6;
  *(undefined1 *)((int)param_1 + 10) = uVar6;
  *(ushort *)((int)param_1 + 6) = uVar8 & 0xff | (ushort)(uVar7 << 8);
  *(undefined1 *)((int)param_1 + 5) = unaff_r8;
  param_1[3] = uVar4;
  *(char *)(param_1 + 1) = cVar3;
LAB_018b5e94:
  *param_1 = 0x80000000;
  return;
}

