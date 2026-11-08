// FUN_00fb4684 @ 00fb4684 size=476 calls_out=2 calls_in=1
// strings: 

void FUN_00fb4684(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  undefined6 uVar14;
  undefined4 local_4c;
  undefined1 uStack_48;
  undefined4 local_47;
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  pcVar8 = (char *)*param_2;
  iVar9 = param_2[1];
  if (iVar9 != 0) {
    cVar1 = *pcVar8;
    *param_2 = pcVar8 + 1;
    param_2[1] = iVar9 + -1;
    if (cVar1 == '[') {
      FUN_00fb3f68(&local_4c);
      if ((char)local_4c == '\x01') {
        local_38 = CONCAT13(uStack_48,local_4c._1_3_);
        uStack_34 = local_47;
        uStack_30 = local_43;
        local_2c = local_3f;
        iVar12 = param_2[1];
        if (iVar12 != 0) {
          pbVar13 = (byte *)*param_2;
          bVar2 = *pbVar13;
          if (bVar2 == 0x25) {
            iVar3 = iVar12 + -1;
            if (iVar3 == 0) goto LAB_00fb476c;
            uVar11 = 0;
            iVar6 = 1;
            do {
              pbVar4 = pbVar13 + iVar6;
              uVar10 = *pbVar4 - 0x30;
              if (9 < uVar10) {
                if (iVar6 != 1) goto LAB_00fb4798;
LAB_00fb47a4:
                bVar7 = false;
                goto LAB_00fb47ac;
              }
              uVar5 = (uint)((ulonglong)uVar11 * 10);
              if (((int)((ulonglong)uVar11 * 10 >> 0x20) != 0) ||
                 (uVar11 = uVar10 + uVar5, CARRY4(uVar10,uVar5))) goto LAB_00fb47a4;
              iVar3 = iVar3 + -1;
              iVar6 = iVar6 + 1;
            } while (iVar3 != 0);
            pbVar4 = pbVar13 + iVar12;
            iVar3 = 0;
LAB_00fb4798:
            bVar7 = true;
            iVar12 = iVar3;
            pbVar13 = pbVar4;
LAB_00fb47ac:
            if (iVar12 == 0) goto LAB_00fb476c;
            bVar2 = *pbVar13;
            uVar10 = 0;
            if (bVar7) {
              uVar10 = uVar11;
            }
          }
          else {
            uVar10 = 0;
          }
          if ((bVar2 == 0x5d) && (iVar12 != 1)) {
            bVar2 = pbVar13[1];
            *param_2 = pbVar13 + 2;
            param_2[1] = iVar12 + -2;
            if (bVar2 == 0x3a) {
              local_47 = CONCAT13(10,(undefined3)local_47);
              local_43 = 0x1000000;
              local_4c = 0;
              uVar14 = FUN_00fb43dc(&local_4c,param_2);
              if (((uint)uVar14 & 0xffff) == 1) {
                *param_1 = 1;
                param_1[4] = local_2c;
                param_1[1] = local_38;
                param_1[2] = uStack_34;
                param_1[3] = uStack_30;
                param_1[5] = 0;
                param_1[6] = uVar10;
                *(short *)(param_1 + 7) = (short)((uint6)uVar14 >> 0x20);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_00fb476c:
  *param_2 = pcVar8;
  param_2[1] = iVar9;
  *param_1 = 0;
  return;
}

