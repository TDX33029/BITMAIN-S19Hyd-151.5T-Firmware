// FUN_0130b738 @ 0130b738 size=532 calls_out=1 calls_in=3
// strings: 

void FUN_0130b738(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_38;
  byte *pbStack_34;
  byte *pbStack_30;
  byte *local_2c;
  undefined4 local_28;
  
  FUN_01312ce0(&local_38);
  pbVar9 = pbStack_34;
  if (local_38 == 1) {
    pbVar6 = local_2c;
  }
  else {
    pbVar2 = pbStack_34 + (int)pbStack_30;
    pbVar6 = (byte *)0x0;
    pbVar4 = pbStack_34;
    do {
      pbVar10 = pbVar6;
      if (pbVar4 == pbVar2) {
        pbVar6 = (byte *)0x0;
        pbVar10 = pbStack_30;
        if (pbStack_30 == (byte *)0x0) goto LAB_0130b880;
        goto LAB_0130b830;
      }
      pbVar5 = pbVar4 + 1;
      uVar7 = (uint)*pbVar4;
      if (0x7fffffff < (uint)(int)(char)*pbVar4) {
        if (uVar7 < 0xe0) {
          uVar7 = pbVar4[1] & 0x3f | (uVar7 & 0x1f) << 6;
          pbVar5 = pbVar4 + 2;
        }
        else {
          uVar1 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
          if (uVar7 < 0xf0) {
            uVar7 = uVar1 | (uVar7 & 0x1f) << 0xc;
            pbVar5 = pbVar4 + 3;
          }
          else {
            uVar7 = pbVar4[3] & 0x3f | uVar1 << 6 | (uVar7 & 7) << 0x12;
            pbVar5 = pbVar4 + 4;
          }
        }
      }
      pbVar6 = pbVar5 + ((int)pbVar10 - (int)pbVar4);
      pbVar4 = pbVar5;
    } while (uVar7 - 0x30 < 10);
    if (pbVar10 == (byte *)0x0) {
      pbVar6 = pbStack_30;
LAB_0130b880:
      local_28 = 0x10;
      pbVar9 = &DAT_00000001;
      pbStack_30 = pbStack_34;
    }
    else {
      pbVar6 = pbStack_30 + -(int)pbVar10;
      pbVar2 = pbStack_34 + (int)pbVar10;
LAB_0130b830:
      FUN_01312ce0(&local_38,pbVar2,pbVar6);
      if (local_38 != 1) {
        if (pbVar10 != (byte *)0x0) {
          if (pbVar10 == &DAT_00000001) {
            bVar3 = *pbVar9;
            if (bVar3 == 0x2b || bVar3 == 0x2d) goto LAB_0130b938;
          }
          else {
            bVar3 = *pbVar9;
          }
          if (bVar3 == 0x2b) {
            pbVar9 = pbVar9 + 1;
            pbVar10 = pbVar10 + -1;
          }
          if (pbVar10 < &DAT_00000009) {
            uVar7 = 0;
            for (; pbVar10 != (byte *)0x0; pbVar10 = pbVar10 + -1) {
              bVar3 = *pbVar9;
              if (9 < bVar3 - 0x30) goto LAB_0130b938;
              pbVar9 = pbVar9 + 1;
              uVar7 = (bVar3 - 0x30) + uVar7 * 10;
            }
LAB_0130b8e4:
            param_1[1] = pbStack_34;
            param_1[2] = pbStack_30;
            param_1[3] = uVar7;
            *param_1 = 3;
            return;
          }
          uVar7 = 0;
          while( true ) {
            if (pbVar10 == (byte *)0x0) goto LAB_0130b8e4;
            uVar1 = (uint)((ulonglong)uVar7 * 10);
            if ((int)((ulonglong)uVar7 * 10 >> 0x20) != 0) break;
            uVar8 = *pbVar9 - 0x30;
            uVar7 = uVar8 + uVar1;
            if ((9 < uVar8) || (pbVar10 = pbVar10 + -1, pbVar9 = pbVar9 + 1, CARRY4(uVar8,uVar1)))
            break;
          }
        }
LAB_0130b938:
        param_1[2] = param_3;
        *(undefined1 *)(param_1 + 3) = 1;
        *param_1 = 1;
        param_1[1] = param_2;
        return;
      }
      pbVar9 = pbStack_34;
      pbVar6 = local_2c;
    }
  }
  *param_1 = pbVar9;
  param_1[1] = pbStack_30;
  param_1[2] = pbVar6;
  param_1[3] = local_28;
  return;
}

