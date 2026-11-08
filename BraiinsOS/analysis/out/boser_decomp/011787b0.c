// FUN_011787b0 @ 011787b0 size=308 calls_out=5 calls_in=1
// strings: 

void FUN_011787b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char local_51;
  undefined4 local_50;
  undefined4 local_4c;
  char *local_48;
  int local_44;
  undefined4 *local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  char *pcStack_30;
  char local_29;
  undefined4 local_28;
  
  local_48 = &local_51;
  iVar4 = 0;
  local_51 = '\0';
  local_50 = param_2;
  local_4c = param_3;
  FUN_0116c2ec(&local_38,&local_50);
  if ((char)local_38 == '\x01') {
    puVar2 = (undefined4 *)FUN_01298504(0x10,1);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x10);
    }
    *puVar2 = CONCAT13((undefined1)uStack_34,local_38._1_3_);
    local_3c = 1;
    local_44 = 4;
    local_38 = local_50;
    uStack_34 = local_4c;
    pcStack_30 = local_48;
    local_40 = puVar2;
    while (iVar4 = local_3c, FUN_0116c2ec(&local_29,&local_38), uVar1 = local_28, local_29 == '\x01'
          ) {
      if (iVar4 == local_44) {
        FUN_016092cc(&local_44,iVar4,1,1,4);
        puVar2 = local_40;
      }
      puVar2[iVar4] = uVar1;
      local_3c = iVar4 + 1;
    }
    iVar3 = local_44;
  }
  else {
    puVar2 = (undefined4 *)&DAT_00000001;
    iVar3 = 0;
  }
  if (local_51 == '\0') {
    *param_1 = iVar3;
    param_1[1] = (int)puVar2;
    param_1[2] = iVar4;
  }
  else {
    *param_1 = -0x80000000;
    FUN_0134aee0(iVar3,puVar2,1,4);
  }
  return;
}

