// FUN_015555dc @ 015555dc size=248 calls_out=5 calls_in=2
// strings: 

int FUN_015555dc(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 *local_80;
  uint local_78;
  uint local_74;
  undefined1 local_48;
  char *local_44;
  undefined8 local_30;
  int *local_28;
  undefined4 local_24;
  
  iVar3 = 0;
  if (*param_2 == '\x05') {
    uVar7 = param_1[2];
    uVar6 = param_1[3];
    if (uVar6 == 0 && (*(uint *)(param_2 + 0xc) <= uVar7) <= uVar6) {
      piVar4 = (int *)*param_1;
      do {
        iVar3 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar3 + 1;
      if (iVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x15556d0);
        (*pcVar1)();
      }
      uVar5 = param_1[1];
      FUN_01508624(&local_c0,param_4,piVar4,uVar5);
      local_30 = FUN_01531840(param_3);
      local_80 = &DAT_8000001c;
      local_48 = 6;
      local_a0 = local_c0;
      uStack_9c = uStack_bc;
      uStack_98 = uStack_b8;
      uStack_94 = uStack_b4;
      local_90 = local_b0;
      uStack_8c = uStack_ac;
      uStack_88 = uStack_a8;
      uStack_84 = uStack_a4;
      local_78 = uVar7;
      local_74 = uVar6;
      local_44 = param_2;
      local_28 = piVar4;
      local_24 = uVar5;
      iVar3 = thunk_FUN_01be5118(0x80);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x80);
      }
      FUN_01bed4e2(iVar3,&local_a0,0x80);
    }
  }
  return iVar3;
}

