// FUN_01662f5c @ 01662f5c size=256 calls_out=5 calls_in=2
// strings: ./0123456789ABCDEFGHIJKLMNOPQRST | ./0123456789ABCDEFGHIJKLMNOPQRST | BUG: Expected a UTF8

void FUN_01662f5c(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char local_38 [4];
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  iVar1 = 0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  do {
    uVar3 = param_2 & 0x3f;
    param_2 = param_2 >> 6;
    local_38[iVar1] = "./0123456789ABCDEFGHIJKLMNOPQRST"[uVar3];
    iVar1 = iVar1 + 1;
  } while (param_3 != iVar1);
  FUN_012fbd94(&local_34,local_38);
  if (local_34 == 1) {
    local_28 = local_30;
    local_24 = local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: Expected a UTF8",0x14,&local_28,&DAT_01d06e04,&DAT_01d06e24);
  }
  uVar4 = 0;
  if (local_2c < 0) {
LAB_01662fc0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,local_2c);
  }
  if (local_2c == 0) {
    iVar2 = 1;
    iVar1 = 0;
  }
  else {
    uVar4 = 1;
    iVar2 = FUN_01298504(local_2c,1);
    iVar1 = local_2c;
    if (iVar2 == 0) goto LAB_01662fc0;
  }
  FUN_01bed4e2(iVar2,local_30,local_2c);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = local_2c;
  return;
}

