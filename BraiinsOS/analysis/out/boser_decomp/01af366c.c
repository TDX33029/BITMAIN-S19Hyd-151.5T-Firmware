// FUN_01af366c @ 01af366c size=604 calls_out=1 calls_in=2
// strings: 

void FUN_01af366c(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar9 = (char *)param_2[1];
  pcVar10 = (char *)param_2[2];
  if ((pcVar9 <= pcVar10) || (iVar6 = *param_2, pcVar10[iVar6] != '\x01')) {
    *param_1 = 0x8000002d;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  pcVar12 = pcVar10 + 1;
  param_2[2] = (int)pcVar12;
  pcVar7 = &DAT_00000001;
  if (pcVar12 < pcVar9) {
    bVar1 = pcVar12[iVar6];
    pcVar12 = pcVar10 + 2;
    param_2[2] = (int)pcVar12;
    uVar11 = (uint)(char)bVar1;
    if ((int)uVar11 < 0) {
      pcVar8 = (char *)(bVar1 - 0x81);
      pcVar7 = pcVar8;
      if (pcVar8 < &SUB_00000004) {
        pcVar7 = (char *)(&switchD_01af3740::switchdataD_01af3744)[(int)pcVar8];
        switch(pcVar8) {
        case (char *)0x0:
          if (pcVar12 < pcVar9) {
            pcVar7 = pcVar12 + iVar6;
            pcVar12 = pcVar10 + 3;
            param_2[2] = (int)pcVar12;
            uVar11 = (uint)*pcVar7;
            if ((int)uVar11 < 0) goto LAB_01af36b8;
          }
          break;
        case (char *)0x1:
          if (pcVar12 < pcVar9) {
            cVar4 = pcVar12[iVar6];
            pcVar12 = pcVar10 + 3;
            param_2[2] = (int)pcVar12;
            if (pcVar12 < pcVar9) {
              bVar1 = pcVar12[iVar6];
              pcVar7 = (char *)(uint)bVar1;
              pcVar12 = pcVar10 + 4;
              param_2[2] = (int)pcVar12;
              if (cVar4 != '\0') {
                pcVar7 = (char *)(uint)CONCAT11(cVar4,bVar1);
LAB_01af3874:
                if (pcVar7 < (char *)0xffff) goto LAB_01af36bc;
              }
            }
          }
          break;
        case (char *)0x2:
          if (pcVar12 < pcVar9) {
            bVar1 = pcVar12[iVar6];
            pcVar12 = pcVar10 + 3;
            param_2[2] = (int)pcVar12;
            if (pcVar12 < pcVar9) {
              bVar2 = pcVar12[iVar6];
              pcVar12 = pcVar10 + 4;
              param_2[2] = (int)pcVar12;
              if (pcVar12 < pcVar9) {
                pcVar7 = (char *)(uint)(byte)pcVar12[iVar6];
                pcVar12 = pcVar10 + 5;
                param_2[2] = (int)pcVar12;
                if (bVar1 != 0) {
                  uVar11 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10;
LAB_01af3838:
                  pcVar7 = (char *)(uVar11 | (uint)pcVar7);
                  goto LAB_01af3874;
                }
              }
            }
          }
          break;
        case (char *)0x3:
          if (pcVar12 < pcVar9) {
            bVar1 = pcVar12[iVar6];
            pcVar12 = pcVar10 + 3;
            param_2[2] = (int)pcVar12;
            if (pcVar12 < pcVar9) {
              bVar2 = pcVar12[iVar6];
              pcVar12 = pcVar10 + 4;
              param_2[2] = (int)pcVar12;
              if (pcVar12 < pcVar9) {
                bVar3 = pcVar12[iVar6];
                pcVar12 = pcVar10 + 5;
                param_2[2] = (int)pcVar12;
                if (pcVar12 < pcVar9) {
                  pcVar7 = (char *)(uint)(byte)pcVar12[iVar6];
                  pcVar12 = pcVar10 + 6;
                  param_2[2] = (int)pcVar12;
                  if (bVar1 != 0) {
                    uVar11 = (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar3 << 8;
                    goto LAB_01af3838;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
LAB_01af36b8:
      pcVar7 = (char *)(uVar11 & 0xff);
LAB_01af36bc:
      if ((!CARRY4((uint)pcVar7,(uint)pcVar12)) && (pcVar7 + (int)pcVar12 <= pcVar9)) {
        param_2[2] = (int)(pcVar7 + (int)pcVar12);
        local_34 = CONCAT31(local_34._1_3_,1);
        local_38 = 0x8000001d;
        if (pcVar7 == (char *)0x0) {
LAB_01af3778:
          *param_1 = 0x80000000;
        }
        else {
          uVar5 = 0;
          if (pcVar12[iVar6] != '\0') {
            if (pcVar12[iVar6] != -1) goto LAB_01af3778;
            uVar5 = 1;
          }
          if (pcVar7 != &DAT_00000001) {
            *param_1 = 0x8000001d;
            param_1[1] = local_34;
            param_1[2] = local_30;
            param_1[3] = uStack_2c;
            param_1[4] = local_28;
            param_1[5] = uStack_24;
            param_1[6] = uStack_20;
            param_1[7] = uStack_1c;
            return;
          }
          *(undefined1 *)(param_1 + 1) = uVar5;
          *param_1 = 0x8000002d;
        }
        goto LAB_01af38b0;
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0x8000001d;
  local_34 = 0;
  local_38 = 0x80000000;
  local_30 = pcVar7;
LAB_01af38b0:
  FUN_01aeb5f4(&local_38);
  return;
}

