// FUN_01af347c @ 01af347c size=480 calls_out=0 calls_in=13
// strings: 

void FUN_01af347c(undefined4 *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r6;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  if (uVar8 < uVar7) {
    iVar6 = *param_2;
    uVar9 = uVar8 + 1;
    param_2[2] = uVar9;
    bVar1 = *(byte *)(iVar6 + uVar8);
    unaff_r6 = ~(uint)bVar1;
    if (((unaff_r6 & 0x1f) != 0) && (uVar9 < uVar7)) {
      bVar2 = *(byte *)(iVar6 + uVar9);
      uVar11 = uVar8 + 2;
      param_2[2] = uVar11;
      uVar9 = (uint)(char)bVar2;
      if ((int)uVar9 < 0) {
        uVar9 = bVar2 - 0x81;
        unaff_r6 = uVar9;
        if (uVar9 < 4) {
          unaff_r6 = (&switchD_01af3514::switchdataD_01af3518)[uVar9];
          switch(uVar9) {
          case 0:
            if (uVar11 < uVar7) {
              pcVar10 = (char *)(iVar6 + uVar11);
              uVar11 = uVar8 + 3;
              param_2[2] = uVar11;
              uVar9 = (uint)*pcVar10;
              if ((int)uVar9 < 0) goto LAB_01af34c8;
            }
            break;
          case 1:
            if (uVar11 < uVar7) {
              cVar5 = *(char *)(iVar6 + uVar11);
              uVar9 = uVar8 + 3;
              param_2[2] = uVar9;
              if (uVar9 < uVar7) {
                bVar2 = *(byte *)(iVar6 + uVar9);
                unaff_r6 = (uint)bVar2;
                uVar11 = uVar8 + 4;
                param_2[2] = uVar11;
                if (cVar5 != '\0') {
                  unaff_r6 = (uint)CONCAT11(cVar5,bVar2);
LAB_01af363c:
                  if (unaff_r6 < 0xffff) goto LAB_01af34cc;
                }
              }
            }
            break;
          case 2:
            if (uVar11 < uVar7) {
              bVar2 = *(byte *)(iVar6 + uVar11);
              uVar9 = uVar8 + 3;
              param_2[2] = uVar9;
              if (uVar9 < uVar7) {
                bVar3 = *(byte *)(iVar6 + uVar9);
                uVar9 = uVar8 + 4;
                param_2[2] = uVar9;
                if (uVar9 < uVar7) {
                  unaff_r6 = (uint)*(byte *)(iVar6 + uVar9);
                  uVar11 = uVar8 + 5;
                  param_2[2] = uVar11;
                  if (bVar2 != 0) {
                    uVar8 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10;
LAB_01af3600:
                    unaff_r6 = uVar8 | unaff_r6;
                    goto LAB_01af363c;
                  }
                }
              }
            }
            break;
          case 3:
            if (uVar11 < uVar7) {
              bVar2 = *(byte *)(iVar6 + uVar11);
              uVar9 = uVar8 + 3;
              param_2[2] = uVar9;
              if (uVar9 < uVar7) {
                bVar3 = *(byte *)(iVar6 + uVar9);
                uVar9 = uVar8 + 4;
                param_2[2] = uVar9;
                if (uVar9 < uVar7) {
                  bVar4 = *(byte *)(iVar6 + uVar9);
                  uVar9 = uVar8 + 5;
                  param_2[2] = uVar9;
                  if (uVar9 < uVar7) {
                    unaff_r6 = (uint)*(byte *)(iVar6 + uVar9);
                    uVar11 = uVar8 + 6;
                    param_2[2] = uVar11;
                    if (bVar2 != 0) {
                      uVar8 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar4 << 8;
                      goto LAB_01af3600;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_01af34c8:
        unaff_r6 = uVar9 & 0xff;
LAB_01af34cc:
        if ((!CARRY4(uVar11,unaff_r6)) && (uVar11 + unaff_r6 <= uVar7)) {
          param_2[2] = uVar11 + unaff_r6;
          if ((param_3 & 0xff) == (uint)bVar1) {
            *param_1 = 0x8000002d;
            param_1[1] = iVar6 + uVar11;
            param_1[2] = unaff_r6;
            return;
          }
          goto LAB_01af3660;
        }
      }
    }
  }
  param_1[2] = unaff_r6;
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined2 *)((int)param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
LAB_01af3660:
  *param_1 = 0x80000000;
  return;
}

