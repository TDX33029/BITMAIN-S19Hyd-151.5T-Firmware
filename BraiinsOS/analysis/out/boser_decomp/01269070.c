// FUN_01269070 @ 01269070 size=224 calls_out=2 calls_in=2
// strings: 

void FUN_01269070(int *param_1,uint param_2,undefined1 param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_48 [3];
  int *local_3c;
  uint local_38;
  undefined1 local_34;
  undefined1 auStack_30 [16];
  
  local_48[0] = *param_1;
  if (local_48[0] == 0) {
    local_48[0] = FUN_006c8e68();
    iVar3 = 0;
    *(undefined2 *)(local_48[0] + 0x5e) = 0;
    *(undefined4 *)(local_48[0] + 0x58) = 0;
    *param_1 = local_48[0];
    param_1[1] = 0;
  }
  else {
    iVar3 = param_1[1];
  }
  do {
    iVar6 = (uint)*(ushort *)(local_48[0] + 0x5e) << 3;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      local_48[2] = (uint)*(ushort *)(local_48[0] + 0x5e);
      if (iVar6 == 0) goto LAB_012690b4;
      uVar5 = *(uint *)(local_48[0] + uVar4 * 8);
      iVar6 = iVar6 + -8;
      bVar7 = param_2 < uVar5;
      bVar1 = !bVar7 && param_2 != uVar5;
      uVar5 = uVar4 + 1;
    } while ((char)(bVar1 - bVar7) == '\x01');
    if (bVar1 == bVar7) {
      puVar2 = (uint *)(local_48[0] + uVar4 * 8);
      *puVar2 = param_2;
      *(undefined1 *)(puVar2 + 1) = param_3;
      return;
    }
    local_48[2] = uVar4;
LAB_012690b4:
    if (iVar3 == 0) {
      local_48[1] = 0;
      local_3c = param_1;
      local_38 = param_2;
      local_34 = param_3;
      FUN_0126d010(auStack_30,local_48);
      return;
    }
    iVar3 = iVar3 + -1;
    local_48[0] = *(int *)(local_48[0] + local_48[2] * 4 + 0x60);
  } while( true );
}

