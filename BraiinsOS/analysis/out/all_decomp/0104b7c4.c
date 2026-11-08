// FUN_0104b7c4 @ 0104b7c4 size=376 calls_out=2 calls_in=0
// strings: 

void FUN_0104b7c4(undefined2 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  uVar10 = *(undefined4 *)(param_2 + 0xc);
  uVar11 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = param_1[1];
  iVar9 = *(int *)(param_2 + 0x14);
  uVar4 = param_1[5];
  uVar5 = param_1[4];
  uVar6 = param_1[7];
  uVar7 = param_1[6];
  local_2c = *param_1;
  iVar8 = FUN_0105dce0(uVar10,uVar11,iVar9,&local_2c,2);
  if (iVar8 == 0) {
    *(int *)(param_2 + 0x14) = iVar9 + 2;
    local_2a = uVar3;
    iVar8 = FUN_0105dce0(uVar10,uVar11,iVar9 + 2,&local_2a,2);
    if (iVar8 == 0) {
      *(int *)(param_2 + 0x14) = iVar9 + 4;
      local_28 = uVar2;
      iVar8 = FUN_0105dce0(uVar10,uVar11,iVar9 + 4,&local_28,2);
      if (iVar8 == 0) {
        *(int *)(param_2 + 0x14) = iVar9 + 6;
        local_26 = uVar1;
        iVar8 = FUN_0105dce0(uVar10,uVar11,iVar9 + 6,&local_26,2);
        if (iVar8 == 0) {
          *(int *)(param_2 + 0x14) = iVar9 + 8;
          iVar8 = FUN_0104b93c(param_2,uVar5 << 8 | uVar5 >> 8);
          if (iVar8 == 0) {
            iVar8 = FUN_0104b93c(param_2,uVar4 << 8 | uVar4 >> 8);
            if (iVar8 == 0) {
              iVar8 = FUN_0104b93c(param_2,uVar7 << 8 | uVar7 >> 8);
              if (iVar8 == 0) {
                FUN_0104b93c(param_2,uVar6 << 8 | uVar6 >> 8);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}

