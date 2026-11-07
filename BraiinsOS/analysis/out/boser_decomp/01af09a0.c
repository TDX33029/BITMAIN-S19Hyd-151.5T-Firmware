// FUN_01af09a0 @ 01af09a0 size=508 calls_out=0 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01af09a0(undefined4 *param_1,int *param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  
  pcVar7 = (char *)param_2[1];
  pcVar8 = (char *)param_2[2];
  if (pcVar8 < pcVar7) {
    iVar5 = *param_2;
    pcVar10 = pcVar8 + 1;
    param_2[2] = (int)pcVar10;
    uVar11 = (uint)(byte)pcVar8[iVar5];
    param_4 = (char *)~uVar11;
    if ((((uint)param_4 & 0x1f) != 0) && (pcVar10 < pcVar7)) {
      bVar1 = pcVar10[iVar5];
      pcVar10 = pcVar8 + 2;
      param_2[2] = (int)pcVar10;
      uVar9 = (uint)(char)bVar1;
      if ((int)uVar9 < 0) {
        pcVar6 = (char *)(bVar1 - 0x81);
        param_4 = pcVar6;
        if (pcVar6 < &SUB_00000004) {
          param_4 = (char *)(&switchD_01af0a38::switchdataD_01af0a3c)[(int)pcVar6];
          switch(pcVar6) {
          case (char *)0x0:
            if (pcVar10 < pcVar7) {
              param_4 = pcVar10 + iVar5;
              pcVar10 = pcVar8 + 3;
              param_2[2] = (int)pcVar10;
              uVar9 = (uint)*param_4;
              if ((int)uVar9 < 0) goto LAB_01af09ec;
            }
            break;
          case (char *)0x1:
            if (pcVar10 < pcVar7) {
              cVar4 = pcVar10[iVar5];
              pcVar10 = pcVar8 + 3;
              param_2[2] = (int)pcVar10;
              if (pcVar10 < pcVar7) {
                bVar1 = pcVar10[iVar5];
                param_4 = (char *)(uint)bVar1;
                pcVar10 = pcVar8 + 4;
                param_2[2] = (int)pcVar10;
                if (cVar4 != '\0') {
                  param_4 = (char *)(uint)CONCAT11(cVar4,bVar1);
LAB_01af0b7c:
                  if (param_4 < (char *)0xffff) goto LAB_01af09f0;
                }
              }
            }
            break;
          case (char *)0x2:
            if (pcVar10 < pcVar7) {
              bVar1 = pcVar10[iVar5];
              pcVar10 = pcVar8 + 3;
              param_2[2] = (int)pcVar10;
              if (pcVar10 < pcVar7) {
                bVar2 = pcVar10[iVar5];
                pcVar10 = pcVar8 + 4;
                param_2[2] = (int)pcVar10;
                if (pcVar10 < pcVar7) {
                  param_4 = (char *)(uint)(byte)pcVar10[iVar5];
                  pcVar10 = pcVar8 + 5;
                  param_2[2] = (int)pcVar10;
                  if (bVar1 != 0) {
                    uVar9 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10;
LAB_01af0b40:
                    param_4 = (char *)(uVar9 | (uint)param_4);
                    goto LAB_01af0b7c;
                  }
                }
              }
            }
            break;
          case (char *)0x3:
            if (pcVar10 < pcVar7) {
              bVar1 = pcVar10[iVar5];
              pcVar10 = pcVar8 + 3;
              param_2[2] = (int)pcVar10;
              if (pcVar10 < pcVar7) {
                bVar2 = pcVar10[iVar5];
                pcVar10 = pcVar8 + 4;
                param_2[2] = (int)pcVar10;
                if (pcVar10 < pcVar7) {
                  bVar3 = pcVar10[iVar5];
                  pcVar10 = pcVar8 + 5;
                  param_2[2] = (int)pcVar10;
                  if (pcVar10 < pcVar7) {
                    param_4 = (char *)(uint)(byte)pcVar10[iVar5];
                    pcVar10 = pcVar8 + 6;
                    param_2[2] = (int)pcVar10;
                    if (bVar1 != 0) {
                      uVar9 = (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar3 << 8;
                      goto LAB_01af0b40;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_01af09ec:
        param_4 = (char *)(uVar9 & 0xff);
LAB_01af09f0:
        if ((!CARRY4((uint)pcVar10,(uint)param_4)) && (pcVar10 + (int)param_4 <= pcVar7)) {
          param_2[2] = (int)(pcVar10 + (int)param_4);
          if (uVar11 == 0xa0) {
            param_1[1] = pcVar10 + iVar5;
            param_1[2] = param_4;
            *param_1 = 0x8000002d;
            param_1[3] = 0;
            return;
          }
          if (uVar11 == 0xa1) {
            *param_1 = 0x8000002d;
            param_1[1] = 0;
            return;
          }
          goto LAB_01af0ba0;
        }
      }
    }
  }
  param_1[2] = param_4;
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined2 *)((int)param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
LAB_01af0ba0:
  *param_1 = 0x80000000;
  return;
}

