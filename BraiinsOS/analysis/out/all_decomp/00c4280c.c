// FUN_00c4280c @ 00c4280c size=340 calls_out=3 calls_in=2
// strings: 

void FUN_00c4280c(undefined4 *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined8 in_d0;
  undefined8 uVar9;
  undefined1 auStack_40 [12];
  int local_34 [3];
  
  local_34[0] = *param_2;
  if (local_34[0] != 0) {
    iVar3 = param_2[1];
    do {
      local_34[2] = (int)*(ushort *)(local_34[0] + 0x8a);
      iVar7 = local_34[2] << 2;
      iVar2 = 0x17;
      do {
        iVar5 = iVar2;
        if (iVar7 == 0) goto LAB_00c4288c;
        uVar6 = *(uint *)(local_34[0] + iVar5 * 4);
        iVar7 = iVar7 + -4;
        bVar8 = param_3 < uVar6;
        bVar1 = !bVar8 && param_3 != uVar6;
        iVar2 = iVar5 + 1;
      } while ((char)(bVar1 - bVar8) == '\x01');
      if (bVar1 == bVar8) {
        puVar4 = (undefined8 *)(local_34[0] + (iVar5 + -0x17) * 8);
        uVar9 = *puVar4;
        *puVar4 = in_d0;
        *(undefined8 *)(param_1 + 2) = uVar9;
        *param_1 = 1;
        param_1[1] = 0;
        return;
      }
      local_34[2] = iVar5 - 0x17;
LAB_00c4288c:
      if (iVar3 == 0) goto LAB_00c428d0;
      iVar3 = iVar3 + -1;
      local_34[0] = *(int *)(local_34[0] + local_34[2] * 4 + 0x90);
    } while( true );
  }
LAB_00c42904:
  puVar4 = (undefined8 *)thunk_FUN_016d4a50(0x90);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x90);
  }
  *puVar4 = in_d0;
  *(undefined2 *)((int)puVar4 + 0x8a) = 1;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  *param_2 = (int)puVar4;
  param_2[1] = 0;
  *(uint *)((int)puVar4 + 0x5c) = param_3;
LAB_00c42930:
  param_2[2] = param_2[2] + 1;
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_00c428d0:
  if (local_34[0] != 0) {
    local_34[1] = 0;
    FUN_00c4390c(auStack_40,local_34,param_3,param_2);
    goto LAB_00c42930;
  }
  goto LAB_00c42904;
}

