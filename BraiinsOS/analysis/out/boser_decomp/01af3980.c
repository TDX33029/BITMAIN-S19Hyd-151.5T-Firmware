// FUN_01af3980 @ 01af3980 size=556 calls_out=1 calls_in=2
// strings: 

void FUN_01af3980(undefined4 *param_1,int *param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined1 local_39;
  char *local_38;
  
  pcVar9 = (char *)param_2[1];
  pcVar10 = (char *)param_2[2];
  if (pcVar10 < pcVar9) {
    iVar7 = *param_2;
    pcVar12 = pcVar10 + 1;
    param_2[2] = (int)pcVar12;
    bVar1 = pcVar10[iVar7];
    param_4 = (char *)~(uint)bVar1;
    if ((((uint)param_4 & 0x1f) == 0) || (pcVar9 <= pcVar12)) goto LAB_01af3b80;
    bVar2 = pcVar12[iVar7];
    pcVar12 = pcVar10 + 2;
    param_2[2] = (int)pcVar12;
    uVar11 = (uint)(char)bVar2;
    if ((int)uVar11 < 0) {
      pcVar8 = (char *)(bVar2 - 0x81);
      param_4 = pcVar8;
      if (pcVar8 < &SUB_00000004) {
        param_4 = (char *)(&switchD_01af3a48::switchdataD_01af3a4c)[(int)pcVar8];
        switch(pcVar8) {
        case (char *)0x0:
          if (pcVar12 < pcVar9) {
            param_4 = pcVar12 + iVar7;
            pcVar12 = pcVar10 + 3;
            param_2[2] = (int)pcVar12;
            uVar11 = (uint)*param_4;
            if ((int)uVar11 < 0) goto LAB_01af39d0;
          }
          break;
        case (char *)0x1:
          if (pcVar12 < pcVar9) {
            cVar5 = pcVar12[iVar7];
            pcVar12 = pcVar10 + 3;
            param_2[2] = (int)pcVar12;
            if (pcVar12 < pcVar9) {
              bVar2 = pcVar12[iVar7];
              param_4 = (char *)(uint)bVar2;
              pcVar12 = pcVar10 + 4;
              param_2[2] = (int)pcVar12;
              if (cVar5 != '\0') {
                param_4 = (char *)(uint)CONCAT11(cVar5,bVar2);
LAB_01af3b70:
                if (param_4 < (char *)0xffff) goto LAB_01af39d4;
              }
            }
          }
          break;
        case (char *)0x2:
          if (pcVar12 < pcVar9) {
            bVar2 = pcVar12[iVar7];
            pcVar12 = pcVar10 + 3;
            param_2[2] = (int)pcVar12;
            if (pcVar12 < pcVar9) {
              bVar3 = pcVar12[iVar7];
              pcVar12 = pcVar10 + 4;
              param_2[2] = (int)pcVar12;
              if (pcVar12 < pcVar9) {
                param_4 = (char *)(uint)(byte)pcVar12[iVar7];
                pcVar12 = pcVar10 + 5;
                param_2[2] = (int)pcVar12;
                if (bVar2 != 0) {
                  uVar11 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10;
LAB_01af3b34:
                  param_4 = (char *)(uVar11 | (uint)param_4);
                  goto LAB_01af3b70;
                }
              }
            }
          }
          break;
        case (char *)0x3:
          if (pcVar12 < pcVar9) {
            bVar2 = pcVar12[iVar7];
            pcVar12 = pcVar10 + 3;
            param_2[2] = (int)pcVar12;
            if (pcVar12 < pcVar9) {
              bVar3 = pcVar12[iVar7];
              pcVar12 = pcVar10 + 4;
              param_2[2] = (int)pcVar12;
              if (pcVar12 < pcVar9) {
                bVar4 = pcVar12[iVar7];
                pcVar12 = pcVar10 + 5;
                param_2[2] = (int)pcVar12;
                if (pcVar12 < pcVar9) {
                  param_4 = (char *)(uint)(byte)pcVar12[iVar7];
                  pcVar12 = pcVar10 + 6;
                  param_2[2] = (int)pcVar12;
                  if (bVar2 != 0) {
                    uVar11 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar4 << 8;
                    goto LAB_01af3b34;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_01af3b80;
    }
LAB_01af39d0:
    param_4 = (char *)(uVar11 & 0xff);
LAB_01af39d4:
    if ((CARRY4((uint)param_4,(uint)pcVar12)) || (pcVar9 < param_4 + (int)pcVar12))
    goto LAB_01af3b80;
    param_2[2] = (int)(param_4 + (int)pcVar12);
    if (bVar1 == 3) {
      local_3c = 0;
      local_40 = 0x8000001d;
      uVar6 = 0x80000000;
      if ((param_4 != (char *)0x0) && (pcVar12[iVar7] == '\0')) {
        param_1[1] = pcVar12 + iVar7 + 1;
        param_1[2] = param_4 + -1;
        uVar6 = 0x8000002d;
      }
      goto LAB_01af3ba8;
    }
  }
  else {
LAB_01af3b80:
    local_39 = 0;
    local_3b = 0;
    local_3c = 0;
    local_38 = param_4;
  }
  local_40 = 0x80000000;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar6 = 0x8000001d;
LAB_01af3ba8:
  *param_1 = uVar6;
  FUN_01aeb5f4(&local_40);
  return;
}

