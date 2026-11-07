// FUN_00b6fea4 @ 00b6fea4 size=412 calls_out=6 calls_in=0
// strings: 

void FUN_00b6fea4(char *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x1c]) {
  case '\0':
    *(undefined1 *)(param_2 + 0x1b) = 0;
    param_2[0x18] = (uint)param_2;
    puVar1 = param_2;
LAB_00b6ff18:
    param_2[0x19] = (uint)puVar1;
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uVar5 = puVar1[2];
    uStack_2c = puVar1[3];
    *puVar1 = 2;
    uStack_30 = uVar5;
    if (local_38 != 2) {
      FUN_007372d8(&local_38);
    }
    piVar3 = (int *)(param_2[0x19] + 0x30);
    if (*piVar3 != 4) {
      param_2[0x1a] = (uint)piVar3;
      goto LAB_00b6ff70;
    }
    uVar6 = *(uint *)(param_2[0x19] + 0x34);
LAB_00b6ffd0:
    *(short *)(param_1 + 1) = (short)uVar5;
    *param_1 = '\x04';
    *(uint *)(param_1 + 4) = uVar6;
    *(undefined1 *)(param_2 + 0x1b) = 1;
    param_1[3] = (char)(uVar5 >> 0x10);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1305c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1305c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1b]) {
    case '\0':
      puVar1 = (uint *)param_2[0x18];
      goto LAB_00b6ff18;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d270e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d270e0);
    case '\x03':
      piVar3 = (int *)param_2[0x1a];
    }
LAB_00b6ff70:
    FUN_0195df34(&local_38,piVar3,param_3);
    uVar6 = uStack_34;
    if ((char)local_38 == '\x05') {
      *(undefined1 *)(param_2 + 0x1b) = 3;
LAB_00b6ff90:
      uVar4 = 3;
      *param_1 = '\x05';
      goto LAB_00b6fffc;
    }
    uVar5 = local_38 >> 8;
    if ((local_38 & 0xff) == 4) {
      FUN_011f745c(param_2[0x19] + 0x30);
      uVar2 = param_2[0x19];
      *(undefined4 *)(uVar2 + 0x30) = 4;
      *(uint *)(uVar2 + 0x34) = uVar6;
      goto LAB_00b6ffd0;
    }
    *(short *)(param_1 + 1) = (short)(local_38 >> 8);
    *(uint *)(param_1 + 4) = uStack_34;
    *param_1 = (char)local_38;
    *(undefined1 *)(param_2 + 0x1b) = 1;
    param_1[3] = (char)(local_38 >> 0x18);
    if ((local_38 & 0xff) == 5) goto LAB_00b6ff90;
  }
  uVar4 = 1;
  FUN_011f6f44(param_2);
LAB_00b6fffc:
  *(undefined1 *)(param_2 + 0x1c) = uVar4;
  return;
}

