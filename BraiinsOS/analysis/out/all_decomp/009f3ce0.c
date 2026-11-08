// FUN_009f3ce0 @ 009f3ce0 size=272 calls_out=3 calls_in=2
// strings: 

void FUN_009f3ce0(int *param_1,uint param_2,undefined1 param_3)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_40 [3];
  int *local_34;
  uint local_30;
  undefined1 local_2c;
  undefined1 auStack_28 [16];
  
  local_40[0] = *param_1;
  if (local_40[0] == 0) {
    local_40[0] = thunk_FUN_016d4a50(0x60);
    if (local_40[0] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x60);
    }
    iVar6 = 0;
    *(undefined2 *)(local_40[0] + 0x5e) = 0;
    *(undefined4 *)(local_40[0] + 0x58) = 0;
    *param_1 = local_40[0];
    param_1[1] = 0;
  }
  else {
    iVar6 = param_1[1];
  }
  do {
    iVar5 = (uint)*(ushort *)(local_40[0] + 0x5e) << 3;
    uVar2 = 0;
    do {
      uVar4 = uVar2;
      local_40[2] = (uint)*(ushort *)(local_40[0] + 0x5e);
      if (iVar5 == 0) goto LAB_009f3d40;
      uVar2 = *(uint *)(local_40[0] + uVar4 * 8);
      iVar5 = iVar5 + -8;
      bVar7 = param_2 < uVar2;
      bVar1 = !bVar7 && param_2 != uVar2;
      uVar2 = uVar4 + 1;
    } while ((char)(bVar1 - bVar7) == '\x01');
    if (bVar1 == bVar7) {
      puVar3 = (uint *)(local_40[0] + uVar4 * 8);
      *puVar3 = param_2;
      *(undefined1 *)(puVar3 + 1) = param_3;
      return;
    }
    local_40[2] = uVar4;
LAB_009f3d40:
    if (iVar6 == 0) {
      local_40[1] = 0;
      local_34 = param_1;
      local_30 = param_2;
      local_2c = param_3;
      FUN_009f3608(auStack_28,local_40);
      return;
    }
    iVar6 = iVar6 + -1;
    local_40[0] = *(int *)(local_40[0] + local_40[2] * 4 + 0x60);
  } while( true );
}

