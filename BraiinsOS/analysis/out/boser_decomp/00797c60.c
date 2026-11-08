// FUN_00797c60 @ 00797c60 size=460 calls_out=4 calls_in=1
// strings: 

void FUN_00797c60(undefined1 *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint *puVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint unaff_r7;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_r10;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  FUN_0134a098(&local_34);
  puVar9 = local_2c;
  if (local_34 == (undefined4 *)0x80000000) {
    if ((char)local_30 == '\x03') {
      uVar8 = *local_2c;
      puVar9 = (undefined4 *)local_2c[1];
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar8);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_01be4678(uVar8);
      }
      thunk_FUN_01be4678(local_2c);
    }
    *param_1 = 2;
  }
  else {
    local_2c = local_34;
    local_34 = local_30;
    puVar4 = local_30 + (int)puVar9 * 0x10;
    local_28 = puVar4;
    if (puVar9 != (undefined4 *)0x0) {
      uVar11 = 0;
      puVar9 = local_30;
      do {
        local_30 = puVar9 + 0x10;
        cVar1 = *(char *)(puVar9 + 3);
        if (cVar1 == '\x02') {
          puVar6 = (uint *)((int)puVar9 + 0x12);
        }
        else {
          unaff_r7 = *(uint *)((int)puVar9 + 0x21);
          puVar6 = (uint *)((int)puVar9 + 0x1d);
          unaff_r10 = *(uint *)((int)puVar9 + 0x25);
          uVar11 = *(uint *)((int)puVar9 + 0x29);
        }
        uVar10 = *puVar6;
        bVar2 = (uVar10 | unaff_r10) == 0 && (unaff_r7 == 0 && uVar11 == 0x1000000);
        if (cVar1 == '\x02') {
          bVar2 = (uVar10 & 0xff) == 0x7f;
        }
        if (!bVar2) {
          uVar3 = uVar10 | unaff_r10 | unaff_r7 | uVar11;
          if (cVar1 == '\x02') {
            uVar3 = uVar10;
          }
          if (uVar3 != 0) {
            if (cVar1 == '\x02') {
              if ((uVar10 & 0xffff) != 0xfea9) {
                uVar7 = 0;
LAB_00797e08:
                FUN_019bb7e0(*puVar9,puVar9[1]);
                *(uint *)(param_1 + 9) = unaff_r10;
                *(uint *)(param_1 + 5) = unaff_r7;
                *(uint *)(param_1 + 0xd) = uVar11;
                *(uint *)(param_1 + 1) = uVar10;
                *param_1 = uVar7;
                goto LAB_00797dec;
              }
            }
            else if ((uVar10 & 0xc0ff) != 0x80fe) {
              uVar7 = 1;
              goto LAB_00797e08;
            }
          }
        }
        FUN_019bb7e0(*puVar9,puVar9[1]);
        puVar9 = puVar9 + 0x10;
      } while (puVar9 != puVar4);
      local_30 = puVar4;
    }
    *param_1 = 2;
LAB_00797dec:
    FUN_007a82a4(&local_34);
  }
  return;
}

