// FUN_0140ce9c @ 0140ce9c size=352 calls_out=0 calls_in=5
// strings: 

void FUN_0140ce9c(undefined1 *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  undefined1 uVar9;
  int unaff_lr;
  
  uVar9 = 0;
  iVar4 = 0;
  if (param_3 != 0) {
    uVar5 = 0;
    bVar8 = 0;
    bVar7 = false;
    bVar6 = false;
    bVar2 = 0;
    do {
      bVar1 = ""[*(byte *)(param_2 + iVar4)];
      if (bVar1 < 0x40) {
        if (bVar1 < 0x2f) {
          if (bVar1 == 0) {
            bVar6 = true;
            if (*(byte *)(param_2 + iVar4) != 0x25) {
              uVar3 = 0;
              goto LAB_0140cfdc;
            }
          }
          else if (bVar1 == 0x23) goto LAB_0140cfa0;
        }
        else if (bVar1 == 0x3a) {
          if (7 < uVar5) goto LAB_0140cfd8;
          uVar5 = uVar5 + 1;
        }
        else if ((bVar1 == 0x2f) || (bVar1 == 0x3f)) goto LAB_0140cfa0;
      }
      else if (bVar1 == 0x40) {
        bVar2 = 1;
        unaff_lr = iVar4;
LAB_0140cf54:
        bVar6 = false;
        uVar5 = 0;
      }
      else if (bVar1 == 0x5b) {
        if ((bool)(bVar6 | bVar8)) goto LAB_0140cfd8;
        bVar8 = 1;
        bVar6 = false;
      }
      else if (bVar1 == 0x5d) {
        if (bVar8 == 0xff && !bVar7) {
          bVar7 = true;
          goto LAB_0140cf54;
        }
        goto LAB_0140cfd8;
      }
      iVar4 = iVar4 + 1;
    } while (param_3 != iVar4);
    iVar4 = param_3;
LAB_0140cfa0:
    if (((((bool)(bVar7 ^ bVar8)) || (1 < uVar5)) ||
        ((bool)(iVar4 != 0 & bVar2) && unaff_lr == iVar4 + -1)) || (bVar6)) {
LAB_0140cfd8:
      uVar3 = 2;
LAB_0140cfdc:
      uVar9 = 1;
      param_1[1] = uVar3;
      goto LAB_0140cfec;
    }
  }
  *(int *)(param_1 + 4) = iVar4;
LAB_0140cfec:
  *param_1 = uVar9;
  return;
}

