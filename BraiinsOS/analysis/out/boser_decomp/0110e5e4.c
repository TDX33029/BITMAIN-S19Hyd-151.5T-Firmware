// FUN_0110e5e4 @ 0110e5e4 size=572 calls_out=11 calls_in=3
// strings: 

void FUN_0110e5e4(undefined4 *param_1,byte *param_2,undefined4 *param_3,int *param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 extraout_r1;
  int iVar7;
  uint uVar8;
  undefined1 auStack_c8 [80];
  undefined4 local_78;
  undefined4 local_74;
  
  bVar2 = FUN_019ec70c();
  if ((bVar2 == 2) || ((bVar2 & 1) != 0)) {
    iVar3 = FUN_019f8914(2);
    puVar4 = param_3 + 4;
    uVar6 = 0;
    iVar7 = 0;
    bVar1 = true;
    do {
      bVar5 = bVar1;
      if ((iVar7 + iVar3 & 1U) == 0) {
        if ((*param_2 & 1) != 0) goto LAB_0110e7a8;
        (**(code **)(param_3[1] + 0xc))(&local_78,*param_3,param_4);
        if ((char)local_78 != '\x05') {
          bVar2 = *param_2;
          *param_1 = local_78;
          param_1[1] = local_74;
          bVar2 = bVar2 | 1;
          goto LAB_0110e810;
        }
LAB_0110e7a4:
        uVar6 = 1;
      }
      else if ((*param_2 & 2) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_3 + 3)) {
        case 0:
          iVar7 = *(int *)param_3[2];
          uVar8 = *(uint *)(iVar7 + 8);
          DataMemoryBarrier(0xb);
          *(undefined1 *)(param_3 + 0xc) = 0;
          param_3[0xb] = 0;
          param_3[4] = (int *)param_3[2];
          param_3[5] = iVar7 + 8;
          param_3[6] = uVar8 >> 2;
          param_3[7] = 0;
          param_3[8] = 0;
          param_3[9] = 0;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1fff4);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1fff4);
        case 4:
          goto LAB_0110e780;
        }
        iVar7 = FUN_01a3be00(puVar4,*param_4);
        uVar6 = 3;
        if (iVar7 == 0) {
          FUN_019ede44(param_3 + 5);
          FUN_019e6e74(&local_78,extraout_r1,5,0,0,&DAT_01c20004);
          FUN_01bed4e2(auStack_c8,&local_78,0x50);
          FUN_01bed4e2(puVar4,auStack_c8,0x50);
LAB_0110e780:
          iVar7 = FUN_019e84a0(puVar4,*param_4);
          if (iVar7 == 0) {
            FUN_01431b40(puVar4);
            *(undefined1 *)(param_3 + 3) = 1;
            bVar2 = *param_2;
            *(undefined1 *)param_1 = 5;
            bVar2 = bVar2 | 2;
LAB_0110e810:
            *param_2 = bVar2;
            return;
          }
          uVar6 = 4;
        }
        *(undefined1 *)(param_3 + 3) = uVar6;
        goto LAB_0110e7a4;
      }
LAB_0110e7a8:
      iVar7 = 1;
      bVar1 = false;
    } while (bVar5);
    *(undefined1 *)param_1 = uVar6;
  }
  else {
    FUN_019ece98(*(undefined4 *)*param_4,((undefined4 *)*param_4)[1]);
    *(undefined1 *)param_1 = 7;
  }
  return;
}

