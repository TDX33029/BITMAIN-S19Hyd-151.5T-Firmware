// FUN_01a39988 @ 01a39988 size=228 calls_out=4 calls_in=2
// strings: 

int FUN_01a39988(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *local_28;
  int *local_24;
  undefined1 local_20;
  
  piVar5 = (int *)param_1[0xc];
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar6 = (int *)param_1[1];
    do {
      iVar3 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar3 + 1;
    if (-1 < iVar3) {
      piVar4 = piVar6 + 0x11;
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = *piVar4 + 1;
      FUN_01a15574(&local_60,*param_1);
      local_38 = local_60;
      uStack_34 = uStack_5c;
      uStack_30 = uStack_58;
      local_60 = *param_2;
      uStack_5c = param_2[1];
      uStack_58 = param_2[2];
      uStack_54 = param_2[3];
      uStack_50 = param_2[4];
      local_4c = param_2[5];
      uStack_48 = param_2[6];
      uStack_44 = param_2[7];
      uStack_40 = param_2[8];
      uStack_3c = param_2[9];
      local_20 = 0;
      local_28 = piVar5;
      local_24 = piVar6;
      iVar3 = thunk_FUN_01be5118(0x48);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x48);
      }
      FUN_01bed4e2(iVar3,&local_60,0x48);
      return iVar3;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a39a68);
  (*pcVar1)();
}

