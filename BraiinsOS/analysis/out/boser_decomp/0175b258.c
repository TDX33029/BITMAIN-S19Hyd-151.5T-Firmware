// FUN_0175b258 @ 0175b258 size=268 calls_out=4 calls_in=4
// strings: 

void FUN_0175b258(char *param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  if (param_5 != 0) {
    iVar3 = param_2 + 0x10;
    uVar4 = 0;
    do {
      if (param_5 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar4,param_5,param_5,&DAT_01d2079c);
      }
      local_2c = param_5 - uVar4;
      local_30 = param_4 + uVar4;
      local_34 = 0;
      iVar2 = FUN_018f2b8c(iVar3,&local_34,param_2 + 0x2c0);
      FUN_0191d3f0(iVar3);
      uVar4 = iVar2 + uVar4;
LAB_0175b2c8:
      if (*(int *)(param_2 + 0x218) != 0) {
        FUN_016f71dc(param_1,param_2,iVar3,param_3);
        if (*param_1 == '\x04') goto code_r0x0175b2f4;
        if (*param_1 != '\x05') {
          return;
        }
        goto LAB_0175b328;
      }
    } while (uVar4 != param_5);
  }
  *(uint *)(param_1 + 4) = param_5;
LAB_0175b334:
  cVar1 = '\x04';
LAB_0175b338:
  *param_1 = cVar1;
  return;
code_r0x0175b2f4:
  if (*(int *)(param_1 + 4) == 0) {
LAB_0175b328:
    if (uVar4 != 0) {
      *(uint *)(param_1 + 4) = uVar4;
      goto LAB_0175b334;
    }
    cVar1 = '\x05';
    goto LAB_0175b338;
  }
  goto LAB_0175b2c8;
}

