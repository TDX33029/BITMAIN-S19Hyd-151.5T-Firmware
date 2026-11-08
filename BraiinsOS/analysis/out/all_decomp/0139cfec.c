// FUN_0139cfec @ 0139cfec size=588 calls_out=4 calls_in=4
// strings: 

int FUN_0139cfec(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_50;
  uint local_4c;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  uint local_2c;
  uint local_28;
  
  local_34 = 0;
  local_44 = 0;
  local_50 = 0;
  local_30 = 0;
  local_3c = 0;
  if ((*(byte *)(param_1 + 0x2b5) & *(byte *)(param_1 + 0x2b4)) == 0) {
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
      iVar1 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      do {
        iVar2 = FUN_013aca88(param_1,param_2,&local_50);
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((local_50 & 1) == 0) {
          return 0;
        }
        if (uVar3 <= local_4c) {
          local_2c = local_4c;
          local_28 = uVar3;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_003ce9ea,0x2a,&local_2c,&DAT_018943f8,&DAT_018943e8);
        }
        if (*(char *)(iVar1 + local_4c) == '\0') {
          uVar4 = uVar4 + 1;
          *(undefined1 *)(iVar1 + local_4c) = 1;
          param_3[2] = uVar4;
        }
      } while (uVar4 != uVar3);
      return 0;
    }
    iVar1 = FUN_013aca88(param_1,param_2,&local_50);
  }
  else {
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
      while( true ) {
        iVar1 = FUN_013aca88(param_1,param_2,&local_50);
        if (iVar1 != 0) {
          return iVar1;
        }
        if ((local_50 & 1) == 0) {
          return 0;
        }
        iVar1 = FUN_013b38d0(param_2,&local_50,param_1);
        if (iVar1 != 0) {
          return iVar1;
        }
        if ((local_50 & 1) == 0) break;
        FUN_013c726c(param_3,local_4c);
        if (param_3[2] == param_3[1]) {
          return 0;
        }
      }
      return 0;
    }
    iVar1 = FUN_013aca88(param_1,param_2,&local_50);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((local_50 & 1) == 0) {
      return 0;
    }
    iVar1 = FUN_013b38d0(param_2,&local_50,param_1);
  }
  if ((iVar1 == 0) && (iVar1 = 0, (local_50 & 1) != 0)) {
    iVar1 = 0;
    local_28 = param_3[1];
    if (local_28 <= local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_003ce9ea,0x2a,&local_2c,&DAT_018943f8,&DAT_018943e8);
    }
    if (*(char *)(*param_3 + local_4c) == '\0') {
      iVar1 = param_3[2];
      *(undefined1 *)(*param_3 + local_4c) = 1;
      param_3[2] = iVar1 + 1;
      return 0;
    }
  }
  return iVar1;
}

