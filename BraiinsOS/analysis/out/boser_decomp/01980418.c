// FUN_01980418 @ 01980418 size=488 calls_out=3 calls_in=3
// strings: 

void FUN_01980418(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar7 = *(uint *)(param_2 + 0xc);
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar3 = 0;
  if ((uVar10 < uVar7) || (uVar5 = *(uint *)(param_2 + 8), uVar5 < uVar10)) goto LAB_019805f4;
  uVar8 = (uint)*(byte *)(param_2 + 0x18);
  iVar9 = *(int *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0x14 + uVar8 + -1);
  if (uVar8 < 5) {
    do {
      if (uVar10 - uVar7 < 8) {
        uVar6 = 0;
        if (uVar10 == uVar7) goto LAB_019805e8;
        while (*(char *)(iVar9 + uVar7 + uVar6) != cVar1) {
          uVar6 = uVar6 + 1;
          if (uVar10 - uVar7 == uVar6) goto LAB_019805e8;
        }
      }
      else {
        uVar11 = FUN_01307168(cVar1,iVar9 + uVar7);
        uVar6 = (uint)(uVar11 >> 0x20);
        if ((uVar11 & 1) == 0) goto LAB_019805e8;
      }
      uVar7 = uVar7 + uVar6 + 1;
      *(uint *)(param_2 + 0xc) = uVar7;
      if ((uVar8 <= uVar7) && (uVar7 <= uVar5)) {
        iVar2 = thunk_FUN_01bed842(iVar9 + (uVar7 - uVar8),param_2 + 0x14,uVar8);
        if (iVar2 == 0) {
          uVar3 = 1;
          param_1[1] = uVar7 - uVar8;
          param_1[2] = uVar7;
          goto LAB_019805f4;
        }
      }
    } while (uVar7 <= uVar10);
  }
  else {
    do {
      uVar6 = uVar10 - uVar7;
      if (uVar6 < 8) {
        uVar4 = 0;
        if (uVar6 == 0) {
          uVar11 = 0;
        }
        else {
          do {
            if (*(char *)(iVar9 + uVar7 + uVar4) == cVar1) {
              uVar11 = CONCAT44(uVar4,1);
              goto LAB_019805a8;
            }
            uVar4 = uVar4 + 1;
          } while (uVar6 != uVar4);
          uVar11 = (ulonglong)uVar6 << 0x20;
        }
      }
      else {
        uVar11 = FUN_01307168(cVar1,iVar9 + uVar7);
      }
LAB_019805a8:
      if ((uVar11 & 1) == 0) goto LAB_019805e8;
      uVar7 = uVar7 + (int)(uVar11 >> 0x20) + 1;
      *(uint *)(param_2 + 0xc) = uVar7;
      if ((uVar8 <= uVar7) && (uVar7 <= uVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar8,4,&DAT_01d28184);
      }
    } while (uVar7 <= uVar10);
  }
LAB_019805ec:
  uVar3 = 0;
LAB_019805f4:
  *param_1 = uVar3;
  return;
LAB_019805e8:
  *(uint *)(param_2 + 0xc) = uVar10;
  goto LAB_019805ec;
}

