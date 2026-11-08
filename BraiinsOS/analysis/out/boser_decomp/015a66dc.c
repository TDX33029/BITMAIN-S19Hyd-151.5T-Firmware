// FUN_015a66dc @ 015a66dc size=476 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015a66dc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 *local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 local_34;
  undefined4 local_2c;
  
  local_68 = (undefined4 *)(param_2 + 4);
  uVar5 = 0;
  while( true ) {
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar5,uVar3,uVar3,&DAT_01cfc608);
    }
    local_44 = uVar3 - uVar5;
    local_40 = *(undefined4 *)(param_1 + 0x10);
    uStack_3c = *(undefined4 *)(param_1 + 0x14);
    local_48 = *(int *)(param_1 + 4) + uVar5;
    iStack_38 = -uVar5;
    FUN_015a6508(&local_64,&local_48);
    iVar2 = local_58;
    iVar1 = local_5c;
    if (local_64 == 1) break;
    if ((local_60 & 1) == 0 || param_3 == 0) {
      return;
    }
    FUN_015e8ad4(&local_54,*local_68,local_68[1]);
    iVar4 = local_4c;
    if (local_4c == local_54) {
      FUN_006666a0(&local_54);
    }
    puVar7 = local_50;
    if (iVar4 != 0) {
      FUN_01bed864(local_50 + 1,local_50,iVar4);
    }
    iVar6 = iVar4 + 1;
    *puVar7 = 0x7b;
    if (iVar6 == local_54) {
      local_4c = iVar6;
      FUN_006666a0(&local_54);
      puVar7 = local_50;
    }
    iVar4 = iVar4 + 2;
    puVar7[iVar6] = 0x7d;
    local_4c = iVar4;
    FUN_015e8ad4(&local_64,puVar7,iVar4);
    FUN_015a6374(&local_48,param_1,iVar1 + uVar5,iVar2 + uVar5,&local_64);
    FUN_015a691c(&local_48);
    FUN_01445cc0(&local_48);
    FUN_0134bd64(local_2c,local_34);
    FUN_0134bd64(local_54,puVar7);
    uVar5 = iVar4 + iVar1 + uVar5;
    param_3 = param_3 + -1;
    local_68 = local_68 + 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00533467,0x2b,&local_48,&DAT_01cfc648,&DAT_01cfc688);
}

