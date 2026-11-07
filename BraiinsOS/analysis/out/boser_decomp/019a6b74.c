// FUN_019a6b74 @ 019a6b74 size=892 calls_out=13 calls_in=7
// strings: Custom | strerror_r failure

undefined4 FUN_019a6b74(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_b5;
  int local_b4;
  undefined4 local_b0;
  undefined4 *local_a8;
  uint local_a4;
  int *local_a0;
  undefined4 local_24;
  undefined4 *local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    local_c4 = *(undefined4 *)(param_1 + 4);
    local_bc = (**(code **)(param_2[1] + 0xc))(*param_2,"Os",2);
    local_bb = 0;
    local_c0 = param_2;
    FUN_01302c38(&local_c0,&DAT_0056ef08,4,&local_c4,&DAT_019a6ff0);
    local_b5 = FUN_019a0d94(local_c4);
    FUN_01302c38(&local_c0,&DAT_0056f2ec,4,&local_b5,FUN_019a6fb4);
    uVar2 = local_c4;
    FUN_01bed93e(&local_a8,0,0x80);
    iVar3 = FUN_01bedb9e(uVar2,&local_a8,0x80);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("strerror_r failure",0x25,&DAT_01d27890);
    }
    uVar2 = FUN_01bedbda(&local_a8);
    FUN_006643f0(&local_24,&local_a8,uVar2);
    FUN_00666914(&local_b4,&local_24);
    FUN_01302c38(&local_c0,&DAT_005325f1,7,&local_b4,&LAB_019a6fa8);
    uVar2 = FUN_01302e1c(&local_c0);
    if (local_b4 != 0) {
      thunk_FUN_01be4678(local_b0);
      return uVar2;
    }
    break;
  case 1:
    uVar4 = (uint)(byte)param_1[1];
    iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056e180,4);
    uVar1 = 1;
    local_1b = 0;
    local_20 = param_2;
    if (iVar3 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
        if (iVar3 == 0) {
          uVar1 = (**(code **)(param_2[1] + 0xc))
                            (*param_2,(&PTR_DAT_01d34080)[uVar4],
                             *(undefined4 *)(&DAT_00538d48 + uVar4 * 4));
        }
      }
      else {
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"(\n",2);
        if (iVar3 == 0) {
          local_a0 = &local_b4;
          local_a4 = param_2[1];
          local_a8 = (undefined4 *)*param_2;
          local_b4 = CONCAT31(local_b4._1_3_,1);
          iVar3 = FUN_01302620(&local_a8,(&PTR_DAT_01d34128)[uVar4],
                               *(undefined4 *)(&DAT_00538df0 + uVar4 * 4));
          if (iVar3 == 0) {
            uVar1 = FUN_01302620(&local_a8,&DAT_005312e2,2);
          }
        }
      }
    }
    local_24 = 1;
    local_1c = uVar1;
    uVar2 = FUN_01302aa0(&local_24);
    return uVar2;
  case 2:
    iVar3 = *(int *)(param_1 + 4);
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005333ba,5);
    local_a4 = CONCAT31((int3)(local_a4 >> 8),uVar1) & 0xffff00ff;
    local_a8 = param_2;
    uVar2 = FUN_01302c38(&local_a8,&DAT_0056f2ec,4,iVar3 + 8,FUN_019a6fb4);
    FUN_01302c38(uVar2,&DAT_005325f1,7,iVar3,&LAB_019a6f9c);
    uVar2 = FUN_01302e1c();
    return uVar2;
  case 3:
    local_a8 = *(undefined4 **)(param_1 + 4);
    uVar2 = FUN_01303d90(param_2,"Custom",6,&DAT_0056f2ec,4,local_a8 + 2,FUN_019a6fb4,&DAT_0053268a,
                         5,&local_a8,&LAB_019a6f8c);
  }
  return uVar2;
}

