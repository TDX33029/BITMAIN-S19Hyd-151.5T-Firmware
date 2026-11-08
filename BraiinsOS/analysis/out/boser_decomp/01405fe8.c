// FUN_01405fe8 @ 01405fe8 size=384 calls_out=4 calls_in=0
// strings: overflow when adding duration to instant

void FUN_01405fe8(uint *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint local_50;
  uint uStack_4c;
  undefined1 *puStack_48;
  uint local_40;
  uint local_3c;
  undefined1 *local_38;
  
  do {
    FUN_019ac130(&local_40,1);
    puVar6 = local_38;
    uVar5 = local_3c;
    uVar4 = local_40;
    FUN_01403f28(&local_50,param_2);
    puVar9 = puStack_48;
    uVar3 = uStack_4c;
    uVar2 = local_50;
    bVar1 = (int)(uVar5 - (uStack_4c + (uVar4 < local_50))) < 0 ==
            (SBORROW4(uVar5,uStack_4c) != SBORROW4(uVar5 - uStack_4c,(uint)(uVar4 < local_50)));
    if (uVar4 == local_50 && uVar5 == uStack_4c) {
      bVar1 = puStack_48 <= puVar6;
    }
    if (!bVar1) {
      *(undefined1 *)param_1 = 0;
      puVar9 = &DAT_3b9aca00;
      goto LAB_0140615c;
    }
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar8 = uVar5 + uVar7 + (uint)CARRY4(uVar4,*(uint *)(param_2 + 0x10));
    if (((int)uVar7 < 0 != (int)((uVar5 ^ uVar8) & ~(uVar5 ^ uVar7)) < 0) ||
       ((&DAT_3b9aca00 <= puVar6 + *(int *)(param_2 + 0x18) &&
        ((int)((uVar8 ^ uVar8 + (0xfffffffe < uVar4 + *(uint *)(param_2 + 0x10))) & ~uVar8) < 0))))
    {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
    }
    FUN_01403dd4(&local_40,param_2,local_50,uStack_4c,puStack_48);
  } while (local_40 != 0 || local_3c != 0);
  *param_1 = uVar2;
  param_1[1] = uVar3;
LAB_0140615c:
  param_1[2] = (uint)puVar9;
  return;
}

