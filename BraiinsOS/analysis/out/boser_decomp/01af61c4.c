// FUN_01af61c4 @ 01af61c4 size=568 calls_out=0 calls_in=3
// strings: 

void FUN_01af61c4(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *unaff_r5;
  uint uVar10;
  char *pcVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar9 = param_2[1];
  uVar13 = param_2[2];
  if (uVar13 < uVar9) {
    iVar7 = *param_2;
    uVar10 = uVar13 + 1;
    param_2[2] = uVar10;
    bVar1 = *(byte *)(iVar7 + uVar13);
    uVar8 = (uint)bVar1;
    unaff_r5 = (uint *)~uVar8;
    if ((((uint)unaff_r5 & 0x1f) == 0) || (uVar9 <= uVar10)) goto switchD_01af6288_default;
    bVar5 = *(byte *)(iVar7 + uVar10);
    uVar14 = uVar13 + 2;
    param_2[2] = uVar14;
    uVar10 = (uint)(char)bVar5;
    if ((int)uVar10 < 0) {
      unaff_r5 = (uint *)(uint)bVar5;
      switch((uint *)(uint)bVar5) {
      case (uint *)0x81:
        unaff_r5 = &switchD_01af6288::switchdataD_01af628c;
        if (uVar14 < uVar9) {
          pcVar11 = (char *)(iVar7 + uVar14);
          uVar14 = uVar13 + 3;
          param_2[2] = uVar14;
          uVar10 = (uint)*pcVar11;
          if ((int)uVar10 < 0) goto LAB_01af6214;
        }
        break;
      case (uint *)0x82:
        unaff_r5 = &switchD_01af6288::switchdataD_01af628c;
        if (uVar14 < uVar9) {
          cVar4 = *(char *)(iVar7 + uVar14);
          uVar10 = uVar13 + 3;
          param_2[2] = uVar10;
          if (uVar10 < uVar9) {
            bVar5 = *(byte *)(iVar7 + uVar10);
            uVar14 = uVar13 + 4;
            param_2[2] = uVar14;
            unaff_r5 = (uint *)(uint)bVar5;
            if (cVar4 != '\0') {
              unaff_r5 = (uint *)(uint)CONCAT11(cVar4,bVar5);
LAB_01af6400:
              if (unaff_r5 < (uint *)0xffff) goto LAB_01af6218;
            }
          }
        }
        break;
      case (uint *)0x83:
        unaff_r5 = &switchD_01af6288::switchdataD_01af628c;
        if (uVar14 < uVar9) {
          bVar5 = *(byte *)(iVar7 + uVar14);
          uVar10 = uVar13 + 3;
          param_2[2] = uVar10;
          if (uVar10 < uVar9) {
            bVar2 = *(byte *)(iVar7 + uVar10);
            uVar10 = uVar13 + 4;
            param_2[2] = uVar10;
            if (uVar10 < uVar9) {
              unaff_r5 = (uint *)(uint)*(byte *)(iVar7 + uVar10);
              uVar14 = uVar13 + 5;
              param_2[2] = uVar14;
              if (bVar5 != 0) {
                uVar13 = (uint)bVar2 << 8 | (uint)bVar5 << 0x10;
LAB_01af63c4:
                unaff_r5 = (uint *)(uVar13 | (uint)unaff_r5);
                goto LAB_01af6400;
              }
            }
          }
        }
        break;
      case (uint *)0x84:
        unaff_r5 = &switchD_01af6288::switchdataD_01af628c;
        if (uVar14 < uVar9) {
          bVar5 = *(byte *)(iVar7 + uVar14);
          uVar10 = uVar13 + 3;
          param_2[2] = uVar10;
          if (uVar10 < uVar9) {
            bVar2 = *(byte *)(iVar7 + uVar10);
            uVar10 = uVar13 + 4;
            param_2[2] = uVar10;
            if (uVar10 < uVar9) {
              bVar3 = *(byte *)(iVar7 + uVar10);
              uVar10 = uVar13 + 5;
              param_2[2] = uVar10;
              if (uVar10 < uVar9) {
                unaff_r5 = (uint *)(uint)*(byte *)(iVar7 + uVar10);
                uVar14 = uVar13 + 6;
                param_2[2] = uVar14;
                if (bVar5 != 0) {
                  uVar13 = (uint)bVar2 << 0x10 | (uint)bVar5 << 0x18 | (uint)bVar3 << 8;
                  goto LAB_01af63c4;
                }
              }
            }
          }
        }
      }
      goto switchD_01af6288_default;
    }
LAB_01af6214:
    unaff_r5 = (uint *)(uVar10 & 0xff);
LAB_01af6218:
    if ((CARRY4(uVar14,(uint)unaff_r5)) || (uVar9 < uVar14 + (int)unaff_r5))
    goto switchD_01af6288_default;
    param_2[2] = uVar14 + (int)unaff_r5;
    bVar5 = 0;
    uVar12 = 0;
    switch(uVar8) {
    case 0x81:
    case 0x88:
switchD_01af6248_caseD_81:
      bVar5 = bVar1 & 0x5f;
      uVar12 = 4;
      break;
    case 0x82:
      break;
    case 0x83:
    case 0x84:
    case 0x85:
      goto switchD_01af6248_caseD_83;
    case 0x86:
      uVar12 = 3;
      break;
    case 0x87:
      uVar12 = 2;
      break;
    default:
      switch(uVar8) {
      case 0xa0:
      case 0xa3:
      case 0xa5:
        goto switchD_01af6248_caseD_81;
      default:
        goto switchD_01af6248_caseD_83;
      case 0xa4:
        uVar12 = 1;
        bVar5 = 0;
      }
    }
    *(byte *)((int)param_1 + 5) = bVar5;
    uVar6 = 0x8000002d;
    param_1[2] = iVar7 + uVar14;
    param_1[3] = unaff_r5;
    *(undefined1 *)(param_1 + 1) = uVar12;
  }
  else {
switchD_01af6288_default:
    param_1[2] = unaff_r5;
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
switchD_01af6248_caseD_83:
    uVar6 = 0x80000000;
  }
  *param_1 = uVar6;
  return;
}

