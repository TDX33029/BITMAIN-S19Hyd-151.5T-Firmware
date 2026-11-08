// FUN_01a5d8fc @ 01a5d8fc size=472 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a5d8fc(uint *param_1,int *param_2,int param_3,undefined2 *param_4,uint param_5)

{
  uint *puVar1;
  undefined2 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int extraout_r2;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
  uint local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    param_3 = param_3 * 8;
    uVar8 = param_3 - 8;
    piVar9 = param_2 + 2;
    uVar6 = param_5 * (uVar8 >> 3);
    piVar3 = param_2;
    while (param_3 != 0) {
      puVar1 = (uint *)(piVar3 + 1);
      param_3 = param_3 + -8;
      piVar3 = piVar3 + 2;
      bVar11 = CARRY4(*puVar1,uVar6);
      uVar6 = *puVar1 + uVar6;
      if (bVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
      }
    }
    uVar10 = 0;
    if ((int)uVar6 < 0) {
LAB_01a5d974:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,uVar6);
    }
    uVar7 = 0;
    if (uVar6 == 0) {
      local_2c = 1;
      local_30 = 0;
    }
    else {
      uVar10 = 1;
      local_2c = FUN_01298504(uVar6,1);
      local_30 = uVar6;
      if (local_2c == 0) goto LAB_01a5d974;
    }
    local_28 = 0;
    FUN_01657150(&local_30,*param_2,*param_2 + param_2[1]);
    uVar4 = uVar6 - local_28;
    puVar2 = (undefined2 *)(local_2c + local_28);
    iVar5 = local_28;
    if (param_5 == 2) {
      for (; uVar8 != 0; uVar8 = uVar8 - 8) {
        if (1 < uVar4) {
          uVar7 = uVar4 - 2;
          iVar5 = *piVar9;
          param_5 = piVar9[1];
          *puVar2 = *param_4;
        }
        if (1 >= uVar4 || uVar7 < param_5) goto LAB_01a5da9c;
        piVar9 = piVar9 + 2;
        FUN_01bed4e2(puVar2 + 1,iVar5,param_5);
        uVar4 = uVar7 - param_5;
        puVar2 = (undefined2 *)((int)(puVar2 + 1) + param_5);
        iVar5 = extraout_r2;
      }
    }
    else {
      for (; uVar8 != 0; uVar8 = uVar8 - 8) {
        if (uVar4 == 0) {
LAB_01a5da9c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
        }
        iVar5 = *piVar9;
        uVar7 = piVar9[1];
        *(undefined1 *)puVar2 = *(undefined1 *)param_4;
        if (uVar4 - 1 < uVar7) goto LAB_01a5da9c;
        piVar9 = piVar9 + 2;
        FUN_01bed4e2((undefined1 *)((int)puVar2 + 1),iVar5,uVar7);
        uVar4 = (uVar4 - 1) - uVar7;
        puVar2 = (undefined2 *)((undefined1 *)((int)puVar2 + 1) + uVar7);
      }
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = uVar6 - uVar4;
  }
  return;
}

