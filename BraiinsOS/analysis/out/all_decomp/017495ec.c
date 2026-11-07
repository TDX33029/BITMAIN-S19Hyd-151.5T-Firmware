// FUN_017495ec @ 017495ec size=400 calls_out=9 calls_in=0
// strings: 

undefined8 FUN_017495ec(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_54 [48];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  puVar2 = (undefined1 *)FUN_0177a9c0(0x140,param_2,&PTR_018bc3f4,0);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 1;
    local_60 = 0;
    *(undefined4 *)(puVar2 + 0x120) = 0x1000000;
    *(undefined4 *)(puVar2 + 0x124) = 0;
    *(undefined4 *)(puVar2 + 0x128) = 0;
    *(undefined4 *)(puVar2 + 300) = 0;
    local_5c = 0;
    iVar3 = FUN_017826a8(&local_60);
    uVar5 = 0;
    uVar1 = 0;
    if (iVar3 == 1) {
      uVar5 = local_5c;
      uVar1 = local_60;
    }
    *(undefined4 *)(puVar2 + 0x130) = uVar1;
    *(undefined4 *)(puVar2 + 0x134) = uVar5;
    iVar3 = FUN_0178d504(0,0x20);
    *(int *)(puVar2 + 0x13c) = iVar3;
    if (iVar3 != 0) {
      iVar6 = 3;
      while (iVar3 = FUN_0178cf28(iVar3,auStack_54,0x30), iVar3 != 0x30) {
        FUN_0178d588(*(undefined4 *)(puVar2 + 0x13c));
        *(undefined4 *)(puVar2 + 0x13c) = 0;
        iVar3 = FUN_0178d504(0,0x20);
        *(int *)(puVar2 + 0x13c) = iVar3;
        if ((iVar3 == 0) || (iVar6 = iVar6 + -1, iVar6 == 0)) goto LAB_017496e4;
      }
      iVar3 = FUN_01749140(puVar2 + 8,auStack_54,0);
      if (iVar3 != 0) {
        uVar4 = *(uint *)(puVar2 + 0x128);
        *(uint *)(puVar2 + 0x128) = uVar4 + 1;
        *(uint *)(puVar2 + 300) = *(int *)(puVar2 + 300) + (uint)(0xfffffffe < uVar4);
        FUN_0177aaa0(auStack_54,0x30);
        DAT_018de6dc = puVar2;
        if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2b78();
        }
        return 0;
      }
    }
  }
LAB_017496e4:
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

