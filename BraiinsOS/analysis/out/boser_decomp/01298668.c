// FUN_01298668 @ 01298668 size=364 calls_out=3 calls_in=1
// strings: 

void FUN_01298668(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_2[2];
  puVar1 = (uint *)param_2[3];
  puVar4 = (uint *)param_2[4];
  puVar3 = (uint *)param_2[10];
  uVar5 = *param_2;
  uVar8 = param_2[1];
  while( true ) {
    if (uVar5 != 2) {
      if ((uVar5 & 1) != 0) {
        param_2[1] = 0;
        if (uVar8 != 0) goto LAB_01298774;
        *param_2 = 0;
      }
      if (puVar1 != (uint *)0x0 && puVar1 != puVar4) {
        param_2[3] = (uint)(puVar1 + 3);
        goto LAB_0129876c;
      }
      *param_2 = 2;
    }
    if (puVar3 == (uint *)0x0 || puVar3 == (uint *)param_2[0xb]) break;
    uVar2 = puVar3[10];
    uVar5 = 1;
    puVar1 = (uint *)puVar3[9];
    uVar7 = puVar3[0x48];
    uVar8 = puVar3[0x47];
    puVar3 = puVar3 + 0x5b;
    param_2[10] = (uint)puVar3;
    puVar4 = puVar1 + uVar2 * 3;
    *param_2 = 1;
    param_2[1] = uVar8;
    param_2[2] = uVar7;
    param_2[3] = (uint)puVar1;
    param_2[4] = (uint)puVar4;
  }
  if (param_2[5] == 2) goto LAB_0129874c;
  if ((param_2[5] & 1) == 0) {
LAB_01298730:
    puVar1 = (uint *)param_2[8];
    if (puVar1 != (uint *)0x0) {
      puVar3 = (uint *)param_2[9];
    }
    if (puVar1 == (uint *)0x0 || puVar1 == puVar3) {
      param_2[5] = 2;
LAB_0129874c:
      *param_1 = 0x80000000;
      return;
    }
    param_2[8] = (uint)(puVar1 + 3);
LAB_0129876c:
    uVar8 = *puVar1;
    uVar7 = puVar1[1];
  }
  else {
    uVar8 = param_2[6];
    uVar7 = param_2[7];
    param_2[6] = 0;
    if (uVar8 == 0) {
      param_2[5] = 0;
      goto LAB_01298730;
    }
  }
LAB_01298774:
  uVar6 = 0;
  if ((int)uVar7 < 0) {
LAB_01298780:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar6,uVar7);
  }
  if (uVar7 == 0) {
    uVar2 = 1;
    uVar5 = 0;
  }
  else {
    uVar6 = 1;
    uVar2 = FUN_01298504(uVar7,1);
    uVar5 = uVar7;
    if (uVar2 == 0) goto LAB_01298780;
  }
  FUN_01bed4e2(uVar2,uVar8,uVar7);
  *param_1 = uVar5;
  param_1[1] = uVar2;
  param_1[2] = uVar7;
  return;
}

