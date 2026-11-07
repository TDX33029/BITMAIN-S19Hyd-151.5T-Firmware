// FUN_015547a0 @ 015547a0 size=224 calls_out=6 calls_in=2
// strings: 

int FUN_015547a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
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
  undefined4 local_80;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_30;
  int *local_28;
  undefined4 local_24;
  
  iVar3 = FUN_01554664();
  iVar4 = 0;
  if (iVar3 == 0) {
    piVar5 = (int *)*param_1;
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x155487c);
      (*pcVar1)();
    }
    uVar6 = param_1[1];
    FUN_01508624(&local_c0,param_4,piVar5,uVar6);
    local_30 = FUN_01531840(param_3);
    local_80 = 0x8000002b;
    local_48 = 6;
    local_a0 = local_c0;
    uStack_9c = uStack_bc;
    uStack_98 = uStack_b8;
    uStack_94 = uStack_b4;
    local_90 = local_b0;
    uStack_8c = uStack_ac;
    uStack_88 = uStack_a8;
    uStack_84 = uStack_a4;
    local_44 = param_2;
    local_28 = piVar5;
    local_24 = uVar6;
    iVar4 = thunk_FUN_01be5118(0x80);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(iVar4,&local_a0,0x80);
  }
  return iVar4;
}

