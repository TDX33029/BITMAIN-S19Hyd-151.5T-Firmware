// FUN_0157e384 @ 0157e384 size=524 calls_out=7 calls_in=44
// strings: 

void FUN_0157e384(undefined4 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_30 [3];
  
  do {
    uVar4 = param_2[2];
    FUN_0157d790(param_2);
    uVar1 = param_2[1];
    uVar6 = param_2[2];
    if (uVar6 == uVar1) {
      local_30[0] = 4;
LAB_0157e518:
      FUN_0157e5a0(param_1,param_2,local_30);
      return;
    }
    if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar6,uVar1,&DAT_018a9464);
    }
    iVar5 = *param_2;
    if (*(char *)(iVar5 + uVar6) != '\\') {
      if (*(char *)(iVar5 + uVar6) == '\"') {
        iVar2 = param_3[2];
        if (iVar2 != 0) {
          if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar4,uVar6,uVar1,&DAT_018a9484);
          }
          uVar1 = uVar6 - uVar4;
          if ((uint)(*param_3 - iVar2) < uVar1) {
            FUN_0157eaa8(param_3,iVar2,uVar1);
            iVar2 = param_3[2];
          }
          iVar3 = param_3[1];
          FUN_016dd1aa(iVar3 + iVar2,iVar5 + uVar4,uVar1);
          param_2[2] = uVar6 + 1;
          param_3[2] = iVar2 + uVar1;
          *param_1 = 1;
          param_1[1] = iVar3;
          param_1[2] = iVar2 + uVar1;
          return;
        }
        if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar4,uVar6,uVar1,&DAT_018a9474);
        }
        param_1[2] = uVar6 - uVar4;
        *param_1 = 0;
        param_1[1] = iVar5 + uVar4;
        param_2[2] = uVar6 + 1;
        return;
      }
      param_2[2] = uVar6 + 1;
      local_30[0] = 0x10;
      goto LAB_0157e518;
    }
    if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar4,uVar6,uVar1,&DAT_018a9494);
    }
    uVar1 = uVar6 - uVar4;
    iVar2 = param_3[2];
    if ((uint)(*param_3 - iVar2) < uVar1) {
      FUN_0157eaa8(param_3,iVar2,uVar1);
      iVar2 = param_3[2];
    }
    FUN_016dd1aa(param_3[1] + iVar2,iVar5 + uVar4,uVar1);
    param_3[2] = iVar2 + uVar1;
    param_2[2] = uVar6 + 1;
    iVar5 = FUN_0157db7c(param_2,param_3);
    if (iVar5 != 0) {
      *param_1 = 2;
      param_1[1] = iVar5;
      return;
    }
  } while( true );
}

