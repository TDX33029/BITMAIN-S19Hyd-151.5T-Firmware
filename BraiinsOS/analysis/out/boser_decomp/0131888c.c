// FUN_0131888c @ 0131888c size=416 calls_out=5 calls_in=1
// strings: 

void FUN_0131888c(int *param_1,int param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int local_34;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar4 = 0;
  do {
    if ((param_4 & 0xff) == 4) {
      uVar2 = *param_3;
      uVar1 = (uVar2 & 0x1fff) >> 3;
      if (0x2dc < uVar1) {
LAB_01318a1c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar1,0x2dd,&DAT_01d2a928);
      }
      FUN_01318fe0(&local_34,param_2,(int)uVar2 >> 0xd,uVar1 + (byte)""[uVar1] >> 6,
                   ((uVar2 >> 3) + (uint)(byte)""[uVar1] & 0x3f) >> 1);
LAB_01318980:
      iVar3 = local_34;
      uVar5 = (undefined1)local_30;
      if (local_34 != 7) {
LAB_013189f8:
        FUN_01bed4e2((int)param_1 + 5,(int)&local_30 + 1,0xb);
        *(undefined1 *)(param_1 + 1) = uVar5;
        *param_1 = iVar3;
        return;
      }
      if ((local_30 & 1) != 0) {
        *param_1 = 7;
        *(undefined1 *)(param_1 + 1) = uVar4;
        return;
      }
    }
    else {
      if ((param_4 & 0xff) == 5) {
        uVar1 = (*param_3 & 0x1fff) >> 3;
        if (0x2dc < uVar1) goto LAB_01318a1c;
        if (0xb < (uVar1 + (byte)""[uVar1] >> 6) - 1) {
          iVar3 = 1;
          uVar5 = (undefined1)local_30;
          goto LAB_013189f8;
        }
        uVar1 = uVar1 + (byte)""[uVar1] >> 6;
        iVar3 = param_2 + 0x6c;
LAB_01318978:
        FUN_013160c4(&local_34,iVar3,uVar1,1);
        goto LAB_01318980;
      }
      uVar1 = (int)*param_3 >> 0xd;
      if (uVar1 - 1 < 5000) {
        iVar3 = param_2 + 0x9c;
        goto LAB_01318978;
      }
    }
    FUN_01318a38(&local_34,param_3,param_4);
    if (local_34 != 7) {
      param_1[1] = local_30;
      param_1[2] = iStack_2c;
      param_1[3] = iStack_28;
      *param_1 = local_34;
      return;
    }
    uVar4 = 1;
  } while( true );
}

