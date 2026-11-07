// FUN_01b513fc @ 01b513fc size=332 calls_out=8 calls_in=0
// strings: 

undefined8 FUN_01b513fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_4c [48];
  int local_1c;
  
  local_1c = DAT_01d53560;
  puVar2 = (undefined1 *)FUN_01b6b0a8(0x140,param_2,&PTR_01d3b2b0,0);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 1;
    local_58 = 0;
    *(undefined4 *)(puVar2 + 0x120) = 0x1000000;
    *(undefined4 *)(puVar2 + 0x124) = 0;
    *(undefined4 *)(puVar2 + 0x128) = 0;
    *(undefined4 *)(puVar2 + 300) = 0;
    local_54 = 0;
    iVar3 = FUN_01b70eec(&local_58);
    uVar5 = 0;
    uVar1 = 0;
    if (iVar3 == 1) {
      uVar5 = local_54;
      uVar1 = local_58;
    }
    *(undefined4 *)(puVar2 + 0x130) = uVar1;
    *(undefined4 *)(puVar2 + 0x134) = uVar5;
    iVar3 = FUN_01b7bb84(0,0x20);
    *(int *)(puVar2 + 0x13c) = iVar3;
    if (iVar3 != 0) {
      FUN_01b2071c(puVar2,auStack_4c);
      iVar3 = FUN_01b512a0(puVar2 + 8,auStack_4c,0);
      if (iVar3 != 0) {
        uVar4 = *(uint *)(puVar2 + 0x128);
        *(uint *)(puVar2 + 0x128) = uVar4 + 1;
        *(uint *)(puVar2 + 300) = *(int *)(puVar2 + 300) + (uint)(0xfffffffe < uVar4);
        FUN_01b6b174(auStack_4c,0x30);
        DAT_01d51be4 = puVar2;
        if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4();
        }
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

