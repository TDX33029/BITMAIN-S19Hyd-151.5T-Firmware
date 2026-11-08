// FUN_01ae6994 @ 01ae6994 size=456 calls_out=0 calls_in=1
// strings: 

void FUN_01ae6994(undefined1 *param_1,int *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  if ((uVar9 <= uVar10) || (iVar8 = *param_2, param_3 != *(char *)(iVar8 + uVar10))) {
    uVar6 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    goto LAB_01ae6b64;
  }
  uVar7 = uVar10 + 1;
  param_2[2] = uVar7;
  if (uVar7 < uVar9) {
    bVar1 = *(byte *)(iVar8 + uVar7);
    uVar11 = (uint)bVar1;
    uVar7 = uVar10 + 2;
    param_2[2] = uVar7;
    if ((char)bVar1 < '\0') {
      switch(uVar11) {
      case 0x81:
        if (uVar7 < uVar9) {
          bVar1 = *(byte *)(iVar8 + uVar7);
          uVar11 = (uint)bVar1;
          uVar7 = uVar10 + 3;
          param_2[2] = uVar7;
          if ((char)bVar1 < '\0') goto LAB_01ae69e0;
        }
        break;
      case 0x82:
        if (uVar7 < uVar9) {
          cVar5 = *(char *)(iVar8 + uVar7);
          uVar7 = uVar10 + 3;
          param_2[2] = uVar7;
          if (uVar7 < uVar9) {
            uVar6 = *(undefined1 *)(iVar8 + uVar7);
            uVar7 = uVar10 + 4;
            param_2[2] = uVar7;
            if (cVar5 != '\0') {
              uVar11 = (uint)CONCAT11(cVar5,uVar6);
LAB_01ae6b4c:
              if (uVar11 < 0xffff) goto LAB_01ae69e0;
            }
          }
        }
        break;
      case 0x83:
        if (uVar7 < uVar9) {
          bVar1 = *(byte *)(iVar8 + uVar7);
          uVar7 = uVar10 + 3;
          param_2[2] = uVar7;
          if (uVar7 < uVar9) {
            bVar2 = *(byte *)(iVar8 + uVar7);
            uVar7 = uVar10 + 4;
            param_2[2] = uVar7;
            if (uVar7 < uVar9) {
              bVar4 = *(byte *)(iVar8 + uVar7);
              uVar7 = uVar10 + 5;
              param_2[2] = uVar7;
              if (bVar1 != 0) {
                uVar11 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10;
LAB_01ae6b10:
                uVar11 = uVar11 | bVar4;
                goto LAB_01ae6b4c;
              }
            }
          }
        }
        break;
      case 0x84:
        if (uVar7 < uVar9) {
          bVar1 = *(byte *)(iVar8 + uVar7);
          uVar7 = uVar10 + 3;
          param_2[2] = uVar7;
          if (uVar7 < uVar9) {
            bVar2 = *(byte *)(iVar8 + uVar7);
            uVar7 = uVar10 + 4;
            param_2[2] = uVar7;
            if (uVar7 < uVar9) {
              bVar3 = *(byte *)(iVar8 + uVar7);
              uVar7 = uVar10 + 5;
              param_2[2] = uVar7;
              if (uVar7 < uVar9) {
                bVar4 = *(byte *)(iVar8 + uVar7);
                uVar7 = uVar10 + 6;
                param_2[2] = uVar7;
                if (bVar1 != 0) {
                  uVar11 = (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar3 << 8;
                  goto LAB_01ae6b10;
                }
              }
            }
          }
        }
      }
    }
    else {
LAB_01ae69e0:
      if ((!CARRY4(uVar7,uVar11)) && (uVar7 + uVar11 <= uVar9)) {
        param_2[2] = uVar7 + uVar11;
        *(uint *)(param_1 + 4) = iVar8 + uVar7;
        *(uint *)(param_1 + 8) = uVar11;
        uVar6 = 0;
        goto LAB_01ae6b64;
      }
    }
  }
  param_1[1] = 0;
  uVar6 = 1;
LAB_01ae6b64:
  *param_1 = uVar6;
  return;
}

