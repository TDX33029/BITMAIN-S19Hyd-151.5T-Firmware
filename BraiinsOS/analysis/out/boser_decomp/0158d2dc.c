// FUN_0158d2dc @ 0158d2dc size=296 calls_out=5 calls_in=0
// strings: 

undefined8
FUN_0158d2dc(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*param_2 == '\x05') {
    local_3c = 0;
    local_40 = 4;
    local_44 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      uVar8 = *(undefined4 *)(param_2 + 4);
      uVar9 = *(undefined4 *)(param_2 + 8);
      puVar7 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
      iVar6 = *(int *)(param_1 + 8) << 5;
      do {
        uVar4 = puVar7[-1];
        uVar5 = *puVar7;
        iVar1 = FUN_0196b2cc(uVar8,uVar9,uVar4,uVar5);
        if (iVar1 != 0) {
          local_38 = -0x80000000;
          local_34 = uVar4;
          local_30 = uVar5;
          local_2c = param_3;
          uVar10 = FUN_01576990(puVar7 + 1,iVar1,&local_38,param_4,param_5);
          FUN_014fb9d0(&local_44,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
        }
        puVar7 = puVar7 + 8;
        iVar6 = iVar6 + -0x20;
      } while (iVar6 != 0);
    }
    local_2c = local_40 + local_3c * 4;
    local_38 = local_40;
    local_34 = local_40;
    local_30 = local_44;
    piVar2 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar3 = &UNK_01cfc168;
    *piVar2 = local_38;
    piVar2[1] = local_34;
    piVar2[2] = local_30;
    piVar2[3] = local_2c;
  }
  else {
    piVar2 = (int *)&DAT_00000001;
    puVar3 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar3,piVar2);
}

