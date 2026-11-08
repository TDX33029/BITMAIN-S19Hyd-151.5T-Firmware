// FUN_015425c4 @ 015425c4 size=280 calls_out=5 calls_in=0
// strings: 

undefined8
FUN_015425c4(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
      uVar6 = *(undefined4 *)(param_2 + 4);
      uVar7 = *(undefined4 *)(param_2 + 8);
      puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
      iVar4 = *(int *)(param_1 + 8) << 5;
      do {
        iVar1 = FUN_0196b2cc(uVar6,uVar7,puVar5[-1],*puVar5);
        if (iVar1 != 0) {
          uVar8 = FUN_01576990(puVar5 + 1,param_2,param_3,param_4,param_5);
          FUN_014fb9d0(&local_44,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
        }
        puVar5 = puVar5 + 8;
        iVar4 = iVar4 + -0x20;
      } while (iVar4 != 0);
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
    puVar3 = &UNK_01cfb710;
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

