// FUN_01017a38 @ 01017a38 size=476 calls_out=6 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_01017a38(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  int local_5c [3];
  uint local_50;
  int local_4c;
  undefined1 *local_48;
  int *local_40;
  code *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  puVar5 = (uint *)(param_1 + 0x14);
  uVar8 = *puVar5;
  piVar2 = param_1;
  if (uVar8 != 0) {
    FUN_015f3b0c(&local_40,1);
    uVar6 = param_1[4];
    uVar7 = param_1[5];
    local_70 = local_40;
    uStack_6c = local_3c;
    uStack_68 = local_38;
    uVar3 = param_1[6];
    piVar2 = &local_4c;
    if ((uVar8 & 1) != 0) {
      while( true ) {
        local_50 = param_1[0x15];
        local_4c = param_1[0x16];
        if (*(uint *)(param_2 + 0x38) <= local_50) break;
        piVar1 = (int *)(*(int *)(param_2 + 0x34) + local_50 * 0xf8);
        if ((*piVar1 == 3 && piVar1[1] == 0) || (piVar1[0x35] != local_4c)) break;
        if ((undefined1 *)piVar1[6] == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_005667d0,0x20,&DAT_01882584,piVar1[1],piVar2);
        }
        local_4c = piVar1[5];
        local_50 = piVar1[4];
        local_48 = (undefined1 *)piVar1[6];
        FUN_015f3c24(&local_40,&local_70,&local_50);
        uVar4 = local_34;
        uVar8 = local_38;
        if (((uint)local_40 & 1) != 0) {
          uVar8 = 0;
          uVar4 = 0;
        }
        if (uVar8 == uVar6 && uVar4 == uVar7) {
          if (((uint)local_40 & 1) != 0 || local_30 <= uVar3 != 0) {
            return (int *)((uint)local_40 | (uint)(local_30 <= uVar3));
          }
        }
        else if (uVar4 < uVar7 || uVar7 - uVar4 < (uint)(uVar8 <= uVar6)) {
          return (int *)(uVar7 - (uVar4 + (uVar8 > uVar6)));
        }
        FUN_0101aaac(local_5c,puVar5,param_2);
        if (local_5c[0] == 0) {
          return (int *)0x0;
        }
        piVar1 = (int *)FUN_0102e068(param_3,local_5c,1);
        if ((*puVar5 & 1) == 0) {
          return piVar1;
        }
      }
      local_3c = FUN_0101a4ac;
      local_40 = piVar2;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_40,&DAT_01882550);
    }
  }
  return piVar2;
}

