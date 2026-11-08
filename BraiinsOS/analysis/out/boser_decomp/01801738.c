// FUN_01801738 @ 01801738 size=192 calls_out=3 calls_in=1
// strings: 

int FUN_01801738(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_988 [2360];
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  
  local_50 = (int *)*param_1;
  do {
    iVar3 = *local_50;
    bVar2 = (bool)hasExclusiveAccess(local_50);
  } while (!bVar2);
  *local_50 = iVar3 + 1;
  if (-1 < iVar3) {
    local_4c = (int *)param_1[1];
    do {
      iVar3 = *local_4c;
      bVar2 = (bool)hasExclusiveAccess(local_4c);
    } while (!bVar2);
    *local_4c = iVar3 + 1;
    if (-1 < iVar3) {
      local_48 = param_1[2];
      local_44 = *param_2;
      uStack_40 = param_2[1];
      uStack_3c = param_2[2];
      uStack_38 = param_2[3];
      uStack_34 = param_2[4];
      local_30 = param_2[5];
      uStack_2c = param_2[6];
      uStack_28 = param_2[7];
      uStack_24 = param_2[8];
      uStack_20 = param_2[9];
      uStack_1c = param_2[10];
      local_18 = 0;
      iVar3 = thunk_FUN_01be5118(0x978);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x978);
      }
      FUN_01bed4e2(iVar3,auStack_988,0x978);
      return iVar3;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x18017f4);
  (*pcVar1)();
}

