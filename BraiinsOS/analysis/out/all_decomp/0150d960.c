// FUN_0150d960 @ 0150d960 size=344 calls_out=3 calls_in=2
// strings: 

void FUN_0150d960(uint *param_1,int *param_2,undefined4 param_3,undefined2 param_4)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 unaff_r7;
  undefined1 unaff_r9;
  ushort in_r12;
  ushort unaff_lr;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint uStack_24;
  
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  if (uVar6 == uVar7) {
    uVar7 = 0;
    uVar6 = 0xb;
    unaff_r7 = 0x40;
    uVar5 = 0xc;
    param_4 = 0xbd03;
  }
  else {
    param_2[2] = uVar7 + 1;
    if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar7,uVar7 + 1,uVar6,&DAT_018a78f8);
    }
    bVar2 = *(byte *)(*param_2 + uVar7);
    uVar5 = 0x13;
    if (bVar2 < 4) {
      uVar1 = 8 >> (bVar2 & 0xf);
      unaff_r7 = 8;
      param_4 = (short)uVar1;
      if ((uVar1 & 1) != 0) {
        FUN_0152a6b0(&local_30);
        uVar3 = local_30._2_2_;
        uVar4 = (undefined2)local_2c;
        if ((local_30 & 0xff) == 0x18) {
          FUN_015406c4(&local_30,param_2);
          if (local_30 == 1) {
            *param_1 = 0x80000000;
            param_1[1] = local_2c;
            param_1[2] = local_28;
            param_1[3] = uStack_24;
            return;
          }
          *(byte *)((int)param_1 + 0x11) = bVar2;
          *param_1 = local_2c;
          param_1[1] = local_28;
          param_1[2] = uStack_24;
          *(undefined1 *)(param_1 + 4) = 2;
          *(undefined2 *)((int)param_1 + 0xe) = uVar4;
          *(ushort *)(param_1 + 3) = uVar3;
          return;
        }
        uVar7 = local_2c >> 0x18;
        in_r12 = local_30._2_2_ >> 8;
        uVar6 = local_28;
        unaff_lr = local_30._2_2_;
        unaff_r7 = local_2c._2_1_;
        unaff_r9 = local_30._1_1_;
        uVar5 = (undefined1)local_30;
        param_4 = (undefined2)local_2c;
      }
    }
  }
  param_1[3] = uVar6;
  *(ushort *)((int)param_1 + 6) = unaff_lr & 0xff | in_r12 << 8;
  *(char *)((int)param_1 + 0xb) = (char)uVar7;
  *(undefined1 *)((int)param_1 + 10) = unaff_r7;
  *(undefined2 *)(param_1 + 2) = param_4;
  *(undefined1 *)((int)param_1 + 5) = unaff_r9;
  *(undefined1 *)(param_1 + 1) = uVar5;
  *param_1 = 0x80000000;
  return;
}

