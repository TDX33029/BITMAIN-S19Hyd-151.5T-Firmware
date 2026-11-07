// FUN_011393fc @ 011393fc size=304 calls_out=4 calls_in=4
// strings: 

void FUN_011393fc(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34 [2];
  int local_2c;
  undefined1 *local_28;
  
  if (param_2 != 0) {
    iVar3 = 0;
    do {
      iVar6 = iVar3 + 1;
      pbVar5 = (byte *)(param_1 + iVar3 * 0x18);
      bVar1 = *pbVar5;
      if (2 < bVar1) {
        if (bVar1 == 3) {
          if (*(int *)(pbVar5 + 4) != 0) {
            uVar7 = *(undefined4 *)(pbVar5 + 8);
LAB_01139424:
            thunk_FUN_016d3fb4(uVar7);
          }
        }
        else if (bVar1 == 4) {
          uVar7 = *(undefined4 *)(pbVar5 + 8);
          FUN_011393fc(uVar7,*(undefined4 *)(pbVar5 + 0xc));
          if (*(int *)(pbVar5 + 4) != 0) goto LAB_01139424;
        }
        else {
          iVar3 = *(int *)(pbVar5 + 4);
          if (iVar3 == 0) {
            local_38 = 0;
          }
          else {
            local_38 = *(undefined4 *)(pbVar5 + 0xc);
            local_4c = *(undefined4 *)(pbVar5 + 8);
            local_44 = 0;
            local_58[1] = 0;
            local_58[2] = iVar3;
            local_40 = iVar3;
            local_3c = local_4c;
          }
          local_58[0] = (uint)(iVar3 != 0);
          local_48 = local_58[0];
          while( true ) {
            FUN_00a40f64(local_34,local_58);
            iVar2 = local_2c;
            iVar3 = local_34[0];
            if (local_34[0] == 0) break;
            iVar4 = local_34[0] + local_2c * 0xc;
            local_28 = (undefined1 *)local_58;
            if (*(int *)(iVar4 + 0x10c) != 0) {
              local_28 = (undefined1 *)local_58;
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x110));
            }
            FUN_01139718(iVar3 + iVar2 * 0x18);
          }
        }
      }
      iVar3 = iVar6;
    } while (iVar6 != param_2);
  }
  return;
}

